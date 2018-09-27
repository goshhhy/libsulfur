#include <stdlib.h>
#include <signal.h>
#include <string.h>

#include <sulfur/sulfur.h>

xcb_connection_t* sulfurXcbConnection;
xcb_screen_t* sulfurScreen;

int SulfurInit( char* display ) {
    unsigned int v[1];

    if ( display == NULL )
        display = getenv( "DISPLAY" );
    if ( display == NULL )
        display = ":0";

    sulfurXcbConnection = xcb_connect( display, NULL );
	if ( xcb_connection_has_error( sulfurXcbConnection ) )
			return 1;

    sulfurScreen = xcb_setup_roots_iterator( xcb_get_setup( sulfurXcbConnection ) ).data;
    sulfurColormap = sulfurScreen->default_colormap;

    sulfurGc = xcb_generate_id( sulfurXcbConnection );
    v[0] = SULFUR_COLOR_BLACK;
    xcb_create_gc( sulfurXcbConnection, sulfurGc, sulfurScreen->root, XCB_GC_FOREGROUND, v );

    return 0;
}

int SulfurClose( void ) {
    xcb_disconnect( sulfurXcbConnection );
}

xcb_connection_t* sulfurGetXcbConn( void ) {
    return sulfurXcbConnection;
}

xcb_screen_t* sulfurGetXcbScreen( void ) {
    return sulfurScreen;
}
