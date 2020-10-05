#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int u){
	int i,j,k;
	int n1 = mid-l+1;
	int n2 = u-mid;
	int arr1[n1],arr2[n2];
	for(int i=0;i<n1;i++){
		arr1[i] = arr[l+i];
	}
	for(int i=0;i<n1;i++){
		arr2[i] = arr[mid+1+i];
	}
	i=0;j=0;k=l;
	while(i<n1 && j<n2){
		if(arr1[i]<=arr2[j]){
			arr[k]=arr1[i];
			i++;
		}else{
			arr[k] = arr2[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = arr1[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = arr2[j];
		j++;
		k++;
	}
}

void mergesort(int arr[],int l,int u){
	if(l<u){
		int mid = l+(u-l)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,u);
		merge(arr,l,mid,u);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0;
	mergesort(arr,l,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
