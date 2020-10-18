/*
    Template Author :- Avishkar Hande
    Template For competitive Coding
*/
#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long int usli;
typedef unsigned int usi;
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
#define TESTCASE() int t;cin>>t
#define un_mapi unordered_map<int,int>map;
#define un_mapb unordered_map<int,bool>map;

using namespace std;


void solve(int t=1){
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        un_mapi;
        FOR(i,0,n){
            cin>>arr[i];
            map[arr[i]] = 1;
        }
        vi v;
        for(auto x:map){
            v.pb(x.fi);
        }
        sort(v.begin(),v.end());
        if(v.size()<2){
            cout<<-1<<endl;
        }else{
            cout<<v[v.size()-2]<<endl;
        }

    }
}



int main()
{
    TESTCASE();// to be commented when single testcase
    solve(t); // remove t when no test case input taken
}