#line 18 "columns.nw"
static char rcsid[] = "$Id: columns.nw,v 2.21 2006/06/12 21:03:53 nr Exp nr $";
static char rcsname[] = "$Name: v2_11b $";
#include <stdio.h>
#include "columns.h"

int tabsize = 8;
#line 25 "columns.nw"
int columnwidth (char *s) {             /* width of a string in columns */
  return limitcolumn(s, 0);
}
#line 29 "columns.nw"
int limitcolumn (char *s, int col) {
    while (*s) {
        col++;
        if (*s=='\t' && tabsize > 0) while (col % tabsize != 0) col++;
        s++;
    }
    return col;
}
#line 38 "columns.nw"
void indent_for (int width, FILE *fp) { 
                                /* write whitespace [[width]] columns wide */
/*fprintf(fp,"<%2d>",width); if (width>4) {fprintf(fp,"    "); width -= 4;}*/
    if (tabsize > 1)
        while (width >= tabsize) {
            putc('\t', fp);
            width -= tabsize;
        }
    while (width > 0) {
        putc(' ', fp);
        width--;
    }
}

