#include <stdio.h>
#define SQUARE(D)D*D
int main()
{
    int a=10;
    printf("%d",SQUARE(a+1)); // output is   10+11=21
    
    return 0;
}

