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


int main()
{
    int n;
    cin>>n;
    ll arr[n];
    // FOR(i,0,n){
    //     cin>>arr[i];
    // }
    ll sum=0;
    CIN(i,0,n);
    FOR(i,0,n){sum+=arr[i];}
    sort(arr,arr+n);
    ll cur = 0;
    ll cnt=1;
    ll i=0;
    for(int i=n-1;i>=0;i--){
        if(cur+arr[i]<=sum-arr[i]){
            sum-=arr[i];
            cur+=arr[i];
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<endl;

}