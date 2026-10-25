// An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute the area of a circle.
#include <stdio.h>
int main (){
    int r;
    printf("enter the radius : ");
    scanf("%d",&r);
    float pi = 3.14;
    float area = pi*r*r;
    printf("the area of a circle is : %f",area);
    return 0;
}