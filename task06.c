#include <stdio.h>

int main(){
char word[50];
int total = 0,vowels = 0,consonants =0 ;
printf("Write a word: ");
scanf("%s",&word);
int i =0;
while (word[i] != '\0'){
total++;
i++;    
}
 
for (int i = 0; i < total; i++){
    if (word[i] == 'a' ||word[i] == 'e'||word[i] == 'i' ||word[i] == 'o' || word[i] == 'u' ||
    word[i] == 'A' ||word[i] == 'E'||word[i] == 'I' ||word[i] == 'O' || word[i] == 'U' ){
        vowels++;
    }
    
}

printf("Vowels : %d \nConsonants : %d",vowels,total - vowels);

    
return 0;
}