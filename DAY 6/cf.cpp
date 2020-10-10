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
        ll odd=0,even=0;
        ll arr[n];
        FOR(i,0,n){
            cin>>arr[i];
        }
        bool flag=true;
        FOR(i,0,n){
            if((i%2)==(arr[i]%2)){
                continue;
            }else if((i%2==0) && (arr[i]%2==1)){
                flag=false;
                even++;
            }else if((i%2==1) && (arr[i]%2==0)){
                flag=false;
                odd++;
            }
        }
        if(flag==true){
            cout<<0<<endl;
        }
        else if(odd==even){
            cout<<odd<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}