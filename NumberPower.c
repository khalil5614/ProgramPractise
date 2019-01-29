#include<stdio.h>

long power(int n, int e)
{

    if(e==0)
        return 1;
    else
        return n*power(n, e-1);
}

int main()
{

    int n, exp;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("Enter exponential: ");
    scanf("%d", &exp);

    printf("%d^%d= %ld",n, exp,power(n,exp));
    return 0;
}
