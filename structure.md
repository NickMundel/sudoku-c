https://github.com/sheredom/utf8.h

+---+---+---+
| X | X | X |
+---+---+---+
| X | X | X |
+---+---+---+
| X | X | X |
+---+---+---+


template System
width,
height,
l/r char,
t/b char,
filler char,

struct templ {
   unsigned int width: 3;
   unsigned int height: 2;
   wchar_t lr;
   wchar_t tb;
   wchar_t filler;
   wchar_t corner;
   wchar_t nlr;
   wchar_t ntb;
}

struct templ templates[] = {
   {5, 3,'|','-',' ','=',''}
}
