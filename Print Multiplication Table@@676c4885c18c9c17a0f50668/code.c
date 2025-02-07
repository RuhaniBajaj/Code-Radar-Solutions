#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int i=1;
    scanf("%d",&a);
for (i=1;i<=10;i++){
printf("%d x %d = %d",a,i,a*i);
}
    return 0;
}