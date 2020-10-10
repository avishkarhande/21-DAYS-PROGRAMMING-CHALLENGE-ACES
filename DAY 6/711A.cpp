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
    ll n;
    cin>>n;
    char arr[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    bool  flag = false;
    for(int i=0;i<n && flag==false ;i++){
        for(int j=0;j<2 && flag==false;j++){
            if(arr[i][j]=='O' && arr[i][j+1]=='O'){
                arr[i][j] = '+';
                arr[i][j+1] = '+';
                flag=true;
                break;
                
            }
        }
        for(int j=3;j<5 && flag==false;j++){
            if(arr[i][j]=='O' && arr[i][j+1]=='O'){
                arr[i][j] = '+';
                arr[i][j+1] = '+';
                flag=true;
                break;
            }
        }
    }
    if(flag==false){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j];
        }cout<<endl;
    }
    }
}