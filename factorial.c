#include<stdio.h>
int fact(int);

void main(){
    int n;
    printf("enter the the value of n: ");
    scanf("%d",&n);
    int res = fact(n);
    printf("the factorial of %d is %ld",n,res);
}

int fact(int n){
    int factorial = 1;
    for(int i=1; i<=n ; i++){
        factorial = factorial*i;
    }
    return factorial;
}