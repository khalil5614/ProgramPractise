#include<stdio.h>

long long factorials(int number){
    if(number==1|| number==0)
        return 1;
    else
return number* factorials( number-1);
}

void main(){

int n;

printf("n= ");
scanf("%d", &n);

printf("Factorial of %d= %lld", n,factorials(n));

}
