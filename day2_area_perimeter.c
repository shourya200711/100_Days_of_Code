#include <stdio.h>
int main(){
int length, breadth,  area, perimeter;
printf("Enter the value of length and breadth of the rectangle:\n");
scanf("%d %d", &length, &breadth);
area = length * breadth;
perimeter = 2 * (length + breadth);
printf("area=%d, perimeter=%d", area, perimeter);
return 0;
}