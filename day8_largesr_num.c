#include <stdio.h>
int main(){
    int a, b, c;
    printf("enter three digit: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c) {
        printf("The greatest num is a = %d",a);
    }
    else if(b > a && b > c) {
        printf("The greatest num is b = %d",b);
    }
    else {
        printf("The greates num is c = %d",c);
    }
    return 0;
}