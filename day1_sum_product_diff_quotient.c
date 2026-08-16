#include <stdio.h>
int main() {
    int a;
    int b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("The sum of two number is %d\n",sum);
    int diffrence = a-b;
    printf("The diffrence of two number is %d\n",diffrence);
    int product = a*b;
    printf("The product of two number is %d\n",product);
    int quotient = a / b;
    printf("The quotient of two number is %d\n",quotient);
    //printf("The result of the two numbers is %d\n",sum,diffrence,product,quotient);
    return 0;
}