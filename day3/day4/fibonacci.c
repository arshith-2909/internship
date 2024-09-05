#include <stdio.h> 
int fibonacciNumber(int n){
    // Write your code here.
    if(n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    } else {
        return fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n); 
    int fib=fibonacciNumber(n);
    printf("%d",fib);
    return 0;
}