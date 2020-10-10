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


using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll i=1;
    ll level =0;
    ll sum=0;
    ll z=1;
    while(sum<=n){
        sum+=i;
        i+=(nz+1);
        level++;
        z++;
    }
    cout<<level-1<<endl;
}