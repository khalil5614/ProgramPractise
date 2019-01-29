#include<stdio.h>

int main()
{
    int number, revNumber=0, origNumber;
    printf("Enter number: ");
    scanf("%d", &number);
    origNumber=number;
    while(number>0)
    {
        revNumber=revNumber*10+number%10;
        number/=10;
    }
    printf("revNumber=%d, number=%d\n",revNumber,number);
    if(revNumber==origNumber)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
