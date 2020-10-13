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
    int n = stoi(s);
    s = to_string(n);
    bool flag=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            cout<<"Duck Number"<<endl;
            flag = false;
            break;
        }
    }
    if(flag==1){
        cout<<"Not Duck number"<<endl;
    }
    
}