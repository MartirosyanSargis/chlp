#include <stdio.h>
long long foo( long long a)
{   

    for(long i=1; i<=((a/2)+1);++i){
        if(i*i==a){
      
      return i;}   
   }}
int main(){

    long long a=0;

    scanf("%lld", &a);

   

    printf("%lld\n",foo(a));
    return 0;
}
