#include<bits/stdc++.h>
using namespace std;

int first_occ(int arr[],int start,int end,int key){
	int res = -1;
	while(start<=end){
		int mid = start+(end-start)/2;
		if(key==arr[mid]){
			res = mid;
			end = mid-1;
		}else if(key<arr[mid]){
			end=mid-1;
		}else{
			start = mid+1;
		}
	
	}
	return res;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int start=0,end=n-1;
	int key;
	cin>>key;
	int ans = first_occ(arr,start,end,key);
	cout<<ans<<endl;
	return 0;
}
