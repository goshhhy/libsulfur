#include <xcb/xcb.h>
#include <xcb/xcb_atom.h>

extern xcb_connection_t* sulfurXcbConnection;
extern xcb_screen_t* sulfurScreen;
extern xcb_colormap_t sulfurColormap;
extern xcb_gcontext_t sulfurGc;

#include <sulfur/conn.h>
#include <sulfur/window.h>
#include <sulfur/graf.h>

