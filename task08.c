#include<stdio.h>

int main(){

   char str[100];

   printf("Enter a character: ");
   scanf("%[^A-Za-z]", str);
    
   printf("you entered non-alphabetic character %s",str);



    return 0;
}