#include<stdio.h>
int main(){
int arr[3][3];
printf("Enter the rows and columns:");
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
    
}
printf("Array elements are:\n");
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }printf("\n");
    
}return 0;
}
