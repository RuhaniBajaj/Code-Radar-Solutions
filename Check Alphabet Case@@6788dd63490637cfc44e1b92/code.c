#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    if (n >='a' && n<='z'){
        printf("Lowercase");
    }
    else if(n>='A' && n<='Z') {
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}