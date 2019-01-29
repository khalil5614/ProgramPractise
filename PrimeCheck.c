#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
    if (n <= 1)
        return 0;

    if(n>2 && n%2==0)
    {
        return 0;
    }

    for(int i=3; i<=sqrt(n); i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if( isPrime(n))
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    return 0;
}
