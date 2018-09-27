#include <sulfur/sulfur.h>

void SulfurDrawRect( sulfurWindow_t win, sulfurColor_t color, int x, int y, int w, int h ) {
	xcb_rectangle_t rect[1] = {{ .x = x, .y = y, .width = w, .height = h }};
	SulfurSetGcColor( color );
	xcb_poly_rectangle( sulfurXcbConnection, win, sulfurGc, 1, rect );
}

void SulfurDrawFill( sulfurWindow_t win, sulfurColor_t color, int x, int y, int w, int h ) {
	xcb_rectangle_t rect[1] = {{ .x = x, .y = y, .width = w, .height = h }};
	SulfurSetGcColor( color );
	xcb_poly_fill_rectangle( sulfurXcbConnection, win, sulfurGc, 1, rect );
}

void SulfurDrawLine( sulfurWindow_t win, sulfurColor_t color, int x1, int y1, int x2, int y2 ) {
	xcb_segment_t segment[1] = {{ .x1 = x1, .y1 = y1, .x2 = x2, .y2 = y2 }};
	SulfurSetGcColor( color );
	xcb_poly_segment( sulfurXcbConnection, win, sulfurGc, 1, segment );
}
