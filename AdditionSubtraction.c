
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

int a,b;
float c,d;
scanf("%d %d", &a,&b);
scanf("%f %f",&c,&d);
printf("%d %d", a+b,a-b);
printf("\n%.2f %.2f", c+d,c-d);
    return 0;
}
