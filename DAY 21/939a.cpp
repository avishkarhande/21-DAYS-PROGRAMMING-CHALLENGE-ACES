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
        ll n;
        cin>>n;
        bool arr[n+1][n+1];
        FOR(i,0,n+1){
            FOR(j,0,n+1){
                arr[i][j]=0;
            }
        }
        FOR(i,1,n+1){
            int d;
            cin>>d;
            arr[i][d]=1;
        }
        bool flag=0;
        FOR(i,1,n+1){
            FOR(j,1,n+1){
                if(j==i){
                    continue;
                }
                else if(arr[i][j]){
                    FOR(k,1,n+1){
                        if(k==i){
                            continue;
                        }
                        else if(arr[j][k]){
                            if(arr[k][i]){
                                cout<<"YES"<<endl;
                                flag=1;
                                return;
                            }
                        }
                    }
                }
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }

    }
}



int main()
{ // to be commented when single testcase
    solve(); // remove t when no test case input taken
}