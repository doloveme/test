#include <iostream>
#include <stdio.h>
using namespace std;
void insertSort(int *);
int main(){
	int x[9]={1,33,4,2,53,56,74,865,5684};
	int len =sizeof(x)/sizeof(int);
	insertSort(x);
}


void insertSort(int arr[]){

	int len = sizeof(arr)/sizeof(int);
	int i,j;
	for(i=1;i<len;i++){
		if(arr[i]<arr[i-1]){

			int tmp = arr[i];
			for(j=i-1;j>=0 && arr[j]>tmp;j--)
				arr[j+1] =arr[j];
			arr[j+1] = tmp;
		}
		
	}
	for(int i=0;i<len;i++){

		printf("%d ",arr[i]);
	}

	printf("\n");

}


