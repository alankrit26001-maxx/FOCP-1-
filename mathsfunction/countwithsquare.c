#include<Stdio.h>
#include<math.h>
int main(){
    long long n,c;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        c=pow(i,2);   
        printf("%d %lld\n",i,c);
    }

}