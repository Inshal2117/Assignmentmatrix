#include<stdio.h>
int main(){
    int n, gnum;
    printf("Enter the length of 1D array: ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    for(int j=1;j<=n;j++){
            gnum = array[0]; 
            if(array[0]<array[j]){
                array[0] = array[j];
            }
    }
    printf("\nthe gratest number in the element of 1D array is %d.",gnum);
    return 0;
}