#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
	int pivot = arr[high];
	int i = low-1;
	for(int j=low;j<=high-1;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[j],arr[i]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}

void quicksort(int arr[],int low,int high){
	if(low<high){
		int pi = partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}


int main()
{
	int arr[7] = {10,20,70,60,50,40,30};
	quicksort(arr,0,6);
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
