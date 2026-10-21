#include <stdio.h>
int main(){
    int n;
    printf("enter the no. u want to check : ");
    scanf("%d",&n);
    for (int i = 2;i<=n-1;i++)
        if(n%i==0){
            printf("the no. is composite ");
            break;
        }

        else {
        printf("the no. is prime "); 
        break;
        }
        return 0 ;
}