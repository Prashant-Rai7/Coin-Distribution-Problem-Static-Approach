#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int f,o,t;
    f=(n-4)/5;
    
    if ((n-5*f)%2==0) o=2;
    else o=1;
    
    t=(n-5*f-o)/2;
    
    printf("%d %d %d %d",f+o+t, f,t,o);
}