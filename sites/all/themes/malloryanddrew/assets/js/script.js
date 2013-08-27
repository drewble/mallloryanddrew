
(function ($) {

	var jPM = $.jPanelMenu({
		menu: '.block-system-main-menu',
    trigger: '.mobile-trigger',
    duration: 0
	});

	var jRes = jRespond([
    {
        label: 'handheld',
        enter: 0,
        exit: 768
    }
	]);

	jRes.addFunc({
    breakpoint: 'handheld',
    enter: function() {
        jPM.on();
    },
    exit: function() {
        jPM.off();
	    }
	});




})(jQuery);
