#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
   int c;
   
   while ((c = getcahr()) != EOF)
        putchar(c);
}
