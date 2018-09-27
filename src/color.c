#include <sulfur/sulfur.h>

#include <stdio.h>
#include <stdlib.h>

xcb_colormap_t sulfurColormap;
xcb_gcontext_t sulfurGc;

sulfurColor_t SulfurColor( int r, int g, int b ) {
    xcb_alloc_color_reply_t* reply;
    xcb_generic_error_t *error;
    sulfurColor_t color = 0;

    reply = xcb_alloc_color_reply( sulfurXcbConnection, xcb_alloc_color( sulfurXcbConnection, sulfurColormap, r * 256, g * 256, b * 256 ), &error );
    if ( !reply )
        fprintf( stderr, "sulfur can't allocate color! err: %i\n", error->error_code );
    else
        color = reply->pixel;

    free( reply );
    return color;
}

void SulfurSetGcColor( sulfurColor_t color ) {
    unsigned int v[1];

    v[0] = color;
    xcb_change_gc( sulfurXcbConnection, sulfurGc, XCB_GC_FOREGROUND, v );
}