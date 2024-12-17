#include<stdio.h>
int main(){
	int a[10] ={1,5,7,8,9,4,6,2,10,54};
	int max = a[0];
	int min = a[0];
	int n = sizeof(a)/sizeof(a[0]);
	for (int i=1;i<n;i++){
		if(a[i]<min){
		
		min = a[i];
	}
	
	else if (a[i]>max){
	
	max = a[i];
 }
}
 printf(" the size of an array is %d",n);
 printf(" \nThe max element is = %d , \nThe min element is =%d ",max,min);
 return 0;
}
