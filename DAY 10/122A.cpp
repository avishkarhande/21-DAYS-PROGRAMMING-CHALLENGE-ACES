#include<bits/stdc++.h>
typedef long long ll;
#define vi vector<int>
#define pi pair<int,int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int,int>>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define sq(a) a*a
#define mod 1000000007
#define endl "\n"
#define CIN(i,a,b) for(int i=a;i<b;i++){cin>>arr[i];}
using namespace std;

bool islucky(ll n){
    while(n>0){
        int rem = n%10;
        if(rem==4 || rem==7){
        }else{
            return false;
        }
        n/=10;
    }
    return true;
}

int main()
{
    ll n;
    cin>>n;
    bool flag = 0;
    FOR(i,1,n+1){
        if(islucky(i)){
            if(n%i==0){
                cout<<"YES"<<endl;
                flag = 1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }

}