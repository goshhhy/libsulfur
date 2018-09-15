#include <stdlib.h>
#include <signal.h>
#include <string.h>

#include <xenon/xenon.h>

xcb_connection_t *xenonXcbConnection;

int XenonInit( char* display ) {
    if ( display == NULL )
        display = getenv( "DISPLAY" );
    if ( display == NULL )
        display = ":0";

    xenonXcbConnection = xcb_connect( display, NULL );
	if ( xcb_connection_has_error( xenonXcbConnection ) )
			return 1;

    xenonScreen = xcb_setup_roots_iterator( xcb_get_setup( xenonXcbConnection ) ).data;
    return 0;
}

int XenonClose( void ) {
    xcb_disconnect( xenonXcbConnection );
}

xcb_connection_t* XenonGetXcbConn( void ) {
    return xenonXcbConnection;
}