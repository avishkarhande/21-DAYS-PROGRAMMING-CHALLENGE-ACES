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
    string s,n;
    cin>>s;
    FOR(i,0,s.length()){
        if(tolower(s[i])=='a' ||tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' ||tolower(s[i])=='u' ||tolower(s[i])=='y')
        {

        }else{
            n+='.';
            n+=tolower(s[i]);
        }
    }
    cout<<n<<endl;
    
}