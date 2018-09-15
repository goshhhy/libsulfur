#include <xcb/xcb.h>
#include <xcb/xcb_atom.h>

extern xcb_connection_t* xenonXcbConnection;
extern xcb_screen_t* xenonScreen;
extern xcb_colormap_t xenonColormap;

#include <xenon/conn.h>
#include <xenon/draw.h>
#include <xenon/window.h>