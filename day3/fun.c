#include<stdio.h>
int factorial(int n){
    if(n==1||n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main(){
    int num;
    scanf("%d",&num);
    int fact=factorial(num);
    printf("Factorial:%d",fact);
    return 0;
}