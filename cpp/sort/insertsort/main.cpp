#include <iostream>
#include <stdio.h>
using namespace std;
void insertSort(int *);
void insertSort2(int *);
int main(){
	int x[9]={1,33,4,2,53,56,74,865,5684};
	int len =sizeof(x)/sizeof(int);
	insertSort2(x);
	for(int i=0;i<len;i++){

		printf("%d ",x[i]);
	}

	printf("\n");


}

void insertSort2(int s[]){
	int n = sizeof(s)/sizeof(int);
	for(int i=1;i<n;i++){
		printf("----\n  n=%d\n",n);
		if(s[i]<s[i-1]){
			int j=i-1;
			for(j=i-1;j>1;j--){
				if(s[i]<s[j-1])
					s[j] = s[j-1];
				else break;
			}
			s[--j]=s[i];

		}

	}


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
}


