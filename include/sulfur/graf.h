typedef unsigned int sulfurColor_t;

sulfurColor_t SGrafColor( int r, int g, int b );

#define SULFUR_COLOR_WHITE          SGrafColor( 0xff, 0xff, 0xff )
#define SULFUR_COLOR_YELLOW         SGrafColor( 0xff, 0xff, 0x00 )
#define SULFUR_COLOR_ORANGE         SGrafColor( 0xff, 0x66, 0x00 )
#define SULFUR_COLOR_RED            SGrafColor( 0xdd, 0x00, 0x00 )
#define SULFUR_COLOR_MAGENTA        SGrafColor( 0xff, 0x00, 0x99 )
#define SULFUR_COLOR_PURPLE         SGrafColor( 0x33, 0x00, 0x99 )
#define SULFUR_COLOR_BLUE           SGrafColor( 0x00, 0x00, 0xcc )
#define SULFUR_COLOR_CYAN           SGrafColor( 0x00, 0x99, 0xff )
#define SULFUR_COLOR_GREEN          SGrafColor( 0x00, 0xaa, 0x00 )
#define SULFUR_COLOR_DARK_GREEN     SGrafColor( 0x00, 0x66, 0x00 )
#define SULFUR_COLOR_BROWN          SGrafColor( 0x66, 0x33, 0x00 )
#define SULFUR_COLOR_TAN            SGrafColor( 0x99, 0x66, 0x33 )
#define SULFUR_COLOR_LIGHT_GREY     SGrafColor( 0xbb, 0xbb, 0xbb )
#define SULFUR_COLOR_MEDIUM_GREY    SGrafColor( 0x88, 0x88, 0x88 )
#define SULFUR_COLOR_DARK_GREY      SGrafColor( 0x44, 0x44, 0x44 )
#define SULFUR_COLOR_BLACK          SGrafColor( 0x00, 0x00, 0x00 )

void SGrafSetColor( sulfurColor_t color );

void SGrafDrawRect( sulfurWindow_t win, sulfurColor_t color, int x, int y, int w, int h );
void SGrafDrawFill( sulfurWindow_t win, sulfurColor_t color, int x, int y, int w, int h );
void SGrafDrawLine( sulfurWindow_t win, sulfurColor_t color, int x1, int y1, int x2, int y2 );
