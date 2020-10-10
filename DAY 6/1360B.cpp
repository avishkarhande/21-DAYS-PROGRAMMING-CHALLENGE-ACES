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

int maxpower(int n){
    int cnt = 0;
    if(n==1){
        return 0;
    }
    while(n>0){
        if(n%2!=0){
            break;
        }else{
            cnt++;
            n/=2;
        }
    }
    return cnt;
}

using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        FOR(i,0,n){
            cin>>arr[i];
        }
        int min = INT_MAX;
        sort(arr,arr+n);
        for(int i=n-1;i>0;i--){
            if(abs(arr[i]-arr[i-1])<min){
                min = abs(arr[i]-arr[i-1]);
            }
        }
        cout<<min<<endl;
    }
}