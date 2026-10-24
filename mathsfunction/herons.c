#include<Stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,result,p;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    p=s*(s-a)*(s-b)*(s-c);
    result=sqrt(p);
    printf("result is: %0.2f",result);

}