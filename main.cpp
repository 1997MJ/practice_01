#include <stdio.h>
int main(){
   int a,b;
    scanf("%d %d",&a,&b);
    a--; 
    b+=15; 
    if (b>=60) { 
        a++;
        b%=60; 
    }
    if (a<0) a+=24;
    
    printf("%d %d",a,b);
}