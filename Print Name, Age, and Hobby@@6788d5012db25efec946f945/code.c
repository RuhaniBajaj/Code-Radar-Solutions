#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[100], age, hobby[100];
    scanf("%s %d %s", &name,&age,&hobby);
    printf("Name: %s",name);
    printf("Age: %d" ,age);
    printf("Hobby: %s", hobby);
    return 0;
}