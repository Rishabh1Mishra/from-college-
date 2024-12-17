#include<stdio.h>
int main(){
	int arr[2][3],brr[2][3],crr[2][3];
	printf("Enter the numbers:");
	
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
		scanf("%d",&arr[i][j]);
		}
		}
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			
	printf("%d",brr[i][j]);
   }
   printf("%d\n");
   }
   for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           arr[i][j]=brr[j][i];
           printf("%d",brr[i][j]);
       }
       printf("%d\n");
   }
   
   return 0;
}
