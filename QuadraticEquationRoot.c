#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c,d;
    float root1, root2,realPart,imaginaryPart;
    printf("Enter a, b, c: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("Entered a, b, c: %d, %d, %d", a,b,c);

    d=b*b-4*a*c;

    if(d<0)
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-d)/(2*a);
        printf("\nroot1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);

    }
    else if(d==0)
    {
        root1 = root2 = -b/(2*a);
        printf("\nroot1= root2= %f", root1);
    }
    else
    {
        root1=(float)((-b+sqrt(d))/(2*a));
        root2=(float)((-b-sqrt(d))/(2*a));

        printf("\nroot1=%f, root2=%f", root1, root2);
    }
    return 0;
}
