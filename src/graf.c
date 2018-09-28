#include <sulfur/sulfur.h>
#include <stdlib.h>

xcb_colormap_t sulfurColormap;
xcb_gcontext_t sulfurGc;

sulfurColor_t SGrafColor( int r, int g, int b ) {
    xcb_alloc_color_reply_t* reply;
    xcb_generic_error_t *error;
    sulfurColor_t color = 0;

    reply = xcb_alloc_color_reply( sulfurXcbConnection, xcb_alloc_color( sulfurXcbConnection, sulfurColormap, r * 256, g * 256, b * 256 ), &error );
    if ( reply )
        color = reply->pixel;

    free( reply );
    return color;
}

void SGrafSetColor( sulfurColor_t color ) {
    unsigned int v[1];

    v[0] = color;
    xcb_change_gc( sulfurXcbConnection, sulfurGc, XCB_GC_FOREGROUND, v );
}

void SGrafDrawRect( sulfurWindow_t win, sulfurColor_t color, int x, int y, int w, int h ) {
	xcb_rectangle_t rect[1] = {{ .x = x, .y = y, .width = w, .height = h }};
	SGrafSetColor( color );
	xcb_poly_rectangle( sulfurXcbConnection, win, sulfurGc, 1, rect );
}

void SGrafDrawFill( sulfurWindow_t win, sulfurColor_t color, int x, int y, int w, int h ) {
	xcb_rectangle_t rect[1] = {{ .x = x, .y = y, .width = w, .height = h }};
	SGrafSetColor( color );
	xcb_poly_fill_rectangle( sulfurXcbConnection, win, sulfurGc, 1, rect );
}

void SGrafDrawLine( sulfurWindow_t win, sulfurColor_t color, int x1, int y1, int x2, int y2 ) {
	xcb_segment_t segment[1] = {{ .x1 = x1, .y1 = y1, .x2 = x2, .y2 = y2 }};
	SGrafSetColor( color );
	xcb_poly_segment( sulfurXcbConnection, win, sulfurGc, 1, segment );
}
