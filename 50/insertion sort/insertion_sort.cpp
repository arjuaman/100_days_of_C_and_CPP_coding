#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
	int left,key;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			left=i-1;
			key = arr[i];
			while(left>=0 && arr[left]>key){
				arr[left+1]=arr[left];
				left--;
			}
			arr[left+1] = key;
		}
	}
}
int main() {
	int arr[] = {65,25,12,22,22,11,11};
	int n = sizeof(arr)/sizeof(int);
	insertion_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

