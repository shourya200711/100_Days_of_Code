#include <stdio.h>
int main(){
    int total, hours, minutes, seconds;
    printf("enter time in seconds:");
    scanf("%d", &total);
    hours = total / 3600;
    total = total % 3600;
    
    minutes = total / 60;
    seconds = total % 60;
    printf("%d:%d:%d", hours, minutes, seconds);
    return 0;
}