/*
ID: avishka2
TASK: gift1
LANG: C++                 
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





int main()
{
    // ofstream cout ("gift1.out");
    // ifstream cin ("gift1.in");
    unordered_map<string,int>map;
    ll n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        map[s] = 0;
    }
    while(n--){
        string name;
        cin>>name;
        ll money,no;
        cin>>money>>no;
        ll each = money/no;
        while(no--){
            string s;
            cin>>s;
            map[s]+=each;
        }
        map[name]-=each*no;
    }
    for(auto x:map){
        cout<<x.fi<<" "<<x.se<<endl;
    }
}

