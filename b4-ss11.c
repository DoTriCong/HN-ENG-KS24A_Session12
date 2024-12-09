#include<stdio.h>

void findMaxValue(int arr[],int size){
	int maxValue=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>maxValue){
			maxValue=arr[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d\n",maxValue);
}
int main(){
	int num[5]={4,9,5,3,2};
	int size=sizeof(num)/sizeof(num[0]);
	findMaxValue(num,size);
	return 0; 
}
