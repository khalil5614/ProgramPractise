#include <stdio.h>

//3 method. any method can use


/*

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
*/

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

/*
int gcd(int a, int b)
{
   int min,gc,i;
   min = (a<b)?a:b;

    for(i=1;i<=min;i++)
    {
        // Checks if i is factor of n1 &n2
        if(a%i==0 && b%i==0)
        {
            gc = i;
        }
    }

    return gc;
}

*/

// Driver program to test above function
int main()
{
    int a, b, gcf;
    printf("Enter number: ");
    scanf("%d%d", &a, &b);
    gcf=gcd(a, b);
    printf("GCD of %d and %d is %d ", a, b, gcf);
    printf("\nLCM of %d and %d is %d ", a, b,a*b/ gcf);
    return 0;
}
