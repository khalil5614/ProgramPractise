#include<stdio.h>

int main()
{
  int n, reverseNumber=0;
  printf("Enter number: ");
  scanf("%d", &n);
  while(n>0){
    reverseNumber=reverseNumber*10+n%10;
    n=n/10;
  }

  printf("Reverse= %d", reverseNumber);

    return 0;
}
