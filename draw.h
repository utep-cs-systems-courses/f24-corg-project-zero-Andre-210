#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int startCol, int size);
void print_arrow(int leftCol1, int size1, int leftCol2, int size2);
void print_char_5x7(char c);
void print_char_11x16(char c);

extern const unsigned char font_5x7[][5];
extern const unsigned char font_11x16[96][11];
#endif
