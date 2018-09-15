#include <xenon/xenon.h>

typedef unsigned int xenonColor_t;

xcb_colormap_t xenonColormap;


xenonColor_t XenonGetColor( int r, int g, int b ) {
    xcb_alloc_color_reply_t *reply;

    reply = xcb_alloc_color_reply( xenonXcbConnection, xcb_alloc_color( c, xenonColormap, r * 256, g * 256, b * 256 ), NULL );


}