#include<stdio.h>

void main()
{
    int n, first=0,second=1, next;
    printf("Enter number= ");
    scanf("%d",&n);

    printf("Fibonacci series for first %d number is: ",n);

    printf("%d  %d  ",first, second);

    for(int i=2; i<n; i++)
    {
        next=first+second;
        first=second;
        second=next;

        printf("%d  ",next);
    }
}
