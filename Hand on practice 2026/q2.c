//A teacher wants to find the average marks of three students to decide class performance. Implement a solution to accept three numbers and compute their average. 
#include <stdio.h>
int main (){
    float a,b,c;
    printf("enter the first no. : ");
    scanf("%f",&a);
    printf("enter the second no. : ");
    scanf("%f",&b);
    printf("enter the second no. : ");
    scanf("%f",&c);
    float avg = (a+b+c)/3;
    printf("the avg of 3 numbers are : %f",avg);
    return 0;
}