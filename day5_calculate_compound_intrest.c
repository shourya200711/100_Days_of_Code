#include <stdio.h>
int main (){
    float p, r, t;
    float si, ci, amount;
    printf("enter, principal, rate and time: ,");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t)/100;
    amount = p;
    amount = amount * (1 * r / 100);
    amount = amount * (1 * r / 100);

    ci = amount - p;

    printf("simple intrst = %.2f\n", si);
    printf("compound intrest = %.2f", ci);
    return  0;
}