#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}

int main()
{
    int n,q;
    cin>>n>>q;
    int ans = gcd(n,q);
    cout<<ans<<endl;
}
