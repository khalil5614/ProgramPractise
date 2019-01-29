#include<stdio.h>

int main(){

    char c;
int vowel=0;
    printf("Enter word: ");
scanf("%c", &c);

printf("You Entered: %c\n",c);
switch(c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
     vowel=1;
    break;

    }
    if(vowel==1)
        printf("Vowel");
        else
        printf("Consonant");
    return  0;
}
