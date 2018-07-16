function GoogleMapsField(container,latfield,lonfield,zoomfield,addressfield,addresssubmit) {
    var _this = this;
    this.minAddressLength = 5;

    this.container = jQuery(container);
    this.latfield = jQuery(latfield);
    this.lonfield = jQuery(lonfield);
    this.zoomfield = jQuery(zoomfield);
    this.addressfield = jQuery(addressfield);
    this.addresssubmit = jQuery(addresssubmit);

    this.map = new google.maps.Map(this.container[0],{
        scrollwheel: false,
        disableDefaultUI: false,
        mapTypeId: google.maps.MapTypeId.ROADMAP,
        center: new google.maps.LatLng(parseFloat(this.latfield.val()),parseFloat(this.lonfield.val())),
        zoom: parseInt(this.zoomfield.val())
    });

    this.marker = new google.maps.Marker({
        clickable: false,
        draggable: true,
        position: this.map.getCenter(),
        map: this.map
    });

    google.maps.event.addListener(this.marker,'dragend',function(){
        _this.updateLatLonFields();
    });

    google.maps.event.addListener(this.map,'zoom_changed',function(){
        _this.zoomfield.val(_this.map.getZoom());
    });

    this.geocoder = new google.maps.Geocoder();

    this.addresssubmit.bind('click',function(){
        var address = _this.addressfield.get('value');
        if(address.length>_this.minAddressLength) {
            _this.geocoder.geocode({
                address: address,
                location: _this.map.getCenter()
            },function(results, status){
                if (status == google.maps.GeocoderStatus.OK) {
                    _this.map.setCenter(results[0].geometry.location);
                    _this.marker.setPosition(results[0].geometry.location);
                    _this.updateLatLonFields();
                }
            });
        }
    });

    this.updateLatLonFields = function()
    {
        var pos = _this.marker.getPosition();
        _this.latfield.val(pos.lat());
        _this.lonfield.val(pos.lng());
    }
};

var JWDCustom = {
    initMap:function(lat,lon,zoom,body) {
        this.map = new google.maps.Map(document.getElementById("jwd-custom-contact-map"),{
            scrollwheel: false,
            center: new google.maps.LatLng(lat,lon),
            zoom: zoom,
            mapTypeId: google.maps.MapTypeId.ROADMAP
        });
        this.marker = new google.maps.Marker({
            clickable: false,
            position: this.map.getCenter(),
            map: this.map
        });
    }
}