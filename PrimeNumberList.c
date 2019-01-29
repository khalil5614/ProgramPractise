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
    int n,i, total=0;
    printf("Enter Number: ");
    scanf("%d", &n);

    if(n<2)
        printf("There are no Prime Number <=%d ",n);
    else
    {
        printf("Prime Numbers are: ");
        total++;
        printf("2  ");
        for(i=3; i<=n; i=i+2)
        {
            if( isPrime(i))
            {
                total++;
                printf("%d  ",i);
            }
        }
        printf("total prime number= %d  ",total);
    }


    return 0;
}
