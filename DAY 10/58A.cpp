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
    string s;
    cin>>s;
    char arr[5] = {'h','e','l','l','o'};
    int j=0;
    FOR(i,0,s.length()){
        if(s[i]==arr[j]){
            j++;
        }
    }
    if(j>=5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}