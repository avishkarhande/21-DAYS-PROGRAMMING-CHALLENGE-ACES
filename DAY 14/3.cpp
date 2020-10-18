#include<iostream>
using namespace std;

int main(){
	int t,n,num[t],largest,second;
    cin>>t;
	while(t--){
		cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	if(num[0]>num[1]){
		largest=num[0];
		second=num[1];
	}
	else{
		largest=num[1];
		second=num[0];
	}
	for(int i=2;i<n;i++){
		if(num[i]>largest){
			second=largest;
			largest=num[i];
		}
		else if(num[i]>second && num[i]!=largest){
			second=num[i];

		}
	}
	cout<<second;
	}
	return 0;

}