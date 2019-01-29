#include<stdio.h>

void main(){

int n, sum;

printf("n= ");
scanf("%d", &n);

for(int i=1; i<=n/2; i++){
    if(n%i==0)
        printf("%d  ", i);
}
printf("%3d", n);
}
