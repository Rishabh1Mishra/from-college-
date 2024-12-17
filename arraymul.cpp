#include<stdio.h>
int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={1,2,3,4,5};
	int result[5],i;
	for (i = 0; i <5; i++) {
        result[i] = arr1[i] * arr2[i];
    }
    for (i = 0; i <5; i++) {
        printf("%d\n", result[i]);
    }
		
		
}
