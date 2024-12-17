#include<stdio.h>
int main(){
    int arr[2][2];
    printf("Enter the numbers :");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d",arr[i][j]);
        }
        printf("%d\n");
    }
    return 0;
}
