#include<stdio.h>

void primeFactors(int n)
{
    while(n%2==0){
        printf("2 ");
        n/=2;
    }

    for(int i=3;i<=sqrt(n);i=i+2){
        while(n%i==0){
        printf("%d ",i);
        n/=i;
    }
    }
    if(n>2)
        printf("%d ",n);
}

int main()
{

    int n, exp;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("Prime Factors of %d are:", n);
    primeFactors(n);
    return 0;
}
