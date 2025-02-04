#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    
      if(n=='a'||'e'||'i'||'o'||'u'){
         printf("Vowel");
      }
       else if ((n>='a' && n<='z')|| (a>='A' && a<='Z')){
         printf("Consonant");
        }}
    else if(n>='0' && n<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
