#include<stdio.h>

int main()
{
  int n, digit=0;
  printf("Enter number: ");
  scanf("%d", &n);
  while(n>0){
    digit++;
    n=n/10;
  }

  printf("Digits= %d", digit);

    return 0;
}
