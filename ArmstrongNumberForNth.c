#include<stdio.h>

int power(int n, int r)
{
    int c, p = 1;

    for (c = 1; c <= r; c++)
        p = p*n;

    return p;
}

int isArmstrongNumber(int n)
{
    int origNumber, totalDigit=0,digit,sum=0;

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

    return sum==origNumber;
}


int main()
{
    int n,isArm;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("Armstrong Number for n= %d are: ",n);
    for(int i=0; i<=n; i++)
    {
        isArm=isArmstrongNumber(i);
        if(isArm)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
