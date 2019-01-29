#include<stdio.h>

int main()
{
    int n, origNumber, reverseNumber=0;
    printf("Enter number: ");
    scanf("%d", &n);
    origNumber=n;
    while(n>0)
    {
        reverseNumber=reverseNumber*10+n%10;
        n=n/10;
    }

    printf("Reverse= %d\n", reverseNumber);

    if(origNumber==reverseNumber)
        printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");
    return 0;
}
