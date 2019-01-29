#include<stdio.h>
#include<string.h>

int main(){
int i,lb=0,ub,isNotPalindrome=0;
char text[100];

printf("Enter word: ");
scanf("%s", text);

printf("You Entered: %s\n",text);

ub=strlen(text)-1;
while(lb<ub){
    if(text[lb]!=text[ub]){
        isNotPalindrome=1;
        break;
    }
    lb++;
    ub--;
}

if(isNotPalindrome)
printf("Not Palindrome");
else
    printf("Palindrome");
return 0;
}

