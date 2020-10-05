#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int start,int end,int key){
	while(start<=end){
		int mid = start+(end-start)/2;
		if(key==arr[mid])
			return mid;
		else if(key<arr[mid]){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int start=0;
	int end=n-1;
	int answer = binarysearch(arr,start,end,key);
	cout<<answer<<endl;
	return 0;
}
