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
void longest_sub(string s, int k){
    int freq[26] = {0};
    int n=s.length();
    FOR(i,0,n){
        freq[s[i]-'a']++;
    }
    FOR(i,0,n){
        if(freq[s[i]-'a']>=k){
            cout<<s[i];
        }
    }
}

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    longest_sub(s,k);
    
}