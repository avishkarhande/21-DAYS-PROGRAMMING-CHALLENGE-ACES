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
        string s;
        getline(cin,s);
        int arr[26] = {0};
        int i=0;
        while(i<s.length()){
            if(isalpha(s[i])){
                arr[s[i]-'a'] = 1; 
            }
            i++;
        }
        ll cnt = 0;
        FOR(i,0,26){
            cnt+=arr[i];
        }
        cout<<cnt<<endl;
    }
}



int main()
{
    // TESTCASE();
    solve(); // remove t when no test case input taken
}