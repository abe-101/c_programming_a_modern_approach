#include <stdio.h>

int main(void)
{
    printf("Wacky Windows (c) 2010 Wacky Softeare, Inc.\n");
    printf("Compileds on %s at %ss\n", __DATE__, __TIME__);
    printf("This program conforms to %d version of the C standard.\n",__STDC_VERSION__);
    return 0;
}
