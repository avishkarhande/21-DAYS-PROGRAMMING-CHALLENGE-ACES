#include<bits/stdc++.h>
using namespace std;
int main()
{
	int base,exp;
	cin>>base>>exp;
	int res = 1;
	while(exp!=0){
		if(exp%2==0){
			base=base*base;
			exp = exp/2;
		}
		else{
			res*=base;
			exp--;
		}
	}
	cout<<res<<endl;
	return 0;
}
