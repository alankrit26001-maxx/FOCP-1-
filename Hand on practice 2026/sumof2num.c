// A cashier needs to add two amounts entered by a customer quickly. Implement a solution to accept two numbers and compute their sum. 
#include <stdio.h>
int main (){
    int a,b;
    printf("enter the first no. : ");
    scanf("%d",&a);
    printf("enter the second no. : ");
    scanf("%d",&b);
    int sum = a + b;
    printf("the sum of 2 number are : %d",sum);
    return 0;
}