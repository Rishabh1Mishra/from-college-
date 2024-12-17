// WAP to perform linear Search in 1D array
#include<stdio.h>
int main(){
	int a[10] = {1,2,4,5,7,8,9,44,55,21,};
	int k = 55;
	for(int i= 0;i<10;i++){
		if(a[i]== k){
			printf("The number is %d and index is %d",a[i],i);
		}
	}

return 0;
}
