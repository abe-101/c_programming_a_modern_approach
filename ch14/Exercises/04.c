#include <stdio.h>

#define AVG(x,y)    (x+y)/2
#define AREA(x,y)   (x)*(y)

int main(void)
{
    int x = 2, y = 4;
    //Examples of problems
    printf("%d\n", 8 % AVG(x,y)); // prints 1
    printf("%d\n", 40 / AREA(x,y)); // prints 80
}

/*
 * The correnct way to write the definitions:
 * #define AVG(x,y)    ((x+y)/(2))
 * #define AREA(x,y)   ((x)*(y))
 *
 * now 'printf("%d\n", 8 % AVG(x,y));' will properly print 2
 * and 'printf("%d\n", 40 / AREA(x,y));' will properly print 5 

