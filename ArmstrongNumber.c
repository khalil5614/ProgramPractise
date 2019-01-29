#include<stdio.h>
#include<math.h>
int power(int n, int r)
{
    int c, p = 1;

    for (c = 1; c <= r; c++)
        p = p*n;

    return p;
}
int main()
{
    int n,origNumber, totalDigit=0,digit,sum=0;

    printf("Enter Number: ");
    scanf("%d", &n);
    origNumber=n;

    while(n>0)
    {
        totalDigit++;
        n/=10;
    }
    n=origNumber;

    while(n>0)
    {
        digit=n%10;
        n/=10;
        sum=sum+ power(digit, totalDigit);
    }

    if(sum==origNumber)
    {
        printf("\nArmstrong Number");
    }
    else
        printf("\nNot Armstrong Number");
    return 0;
}
