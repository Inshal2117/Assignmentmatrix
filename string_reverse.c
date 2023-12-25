#include<stdio.h>
#include<string.h>
int main(){
    char num[30];
    printf("enter the number or string: ");
    scanf("%s",&num);
    int x = strlen(num)-1;
    printf("the reverse of number or string  is: ");
    for(int i=x; i>=0; i--){
        printf("%c",num[i]);
    }
    return 0;
}