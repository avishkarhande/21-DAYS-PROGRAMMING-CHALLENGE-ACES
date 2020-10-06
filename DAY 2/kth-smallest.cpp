#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
	int pi = arr[high];
	int i=low-1;
	for(int j=low;j<high;j++){
		if(arr[j]<=pi){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}

int kthsmallest(int arr[],int low,int high,int k){
	if(low==high){
		if(low==k)
			return arr[low];
		else{
			return -1;
		}
	}else{
		int pi = partition(arr,low,high);
		if(pi==k){
			return arr[pi];
		}else if(k<pi){
			return kthsmallest(arr,low,pi-1,k);
		}else{
			return kthsmallest(arr,pi+1,high,k);
		}
	}
}


int main()
{
	int arr[7] = {10,20,70,60,50,40,30};
	int ans = kthsmallest(arr,0,6,6);
	cout<<ans<<endl;
	return 0;
}
