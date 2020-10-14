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
    string s;
    cin>>s;
    int arr[4] = {0};
    for(int i=0;i<s.length();i+=2){
        arr[s[i]-'0']++;
    }
    for(int i=1;i<4;i++){
        FOR(j,0,arr[i]){
            if(i==3 && j==arr[i-1]){
                cout<<i;
            }else{
                cout<<i<<"+";
            }

        }
    }
    
}