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
bool subs(string s1,string s2){
    int arr[26] = {0};
    int arr1[26] = {0};
    int n = s1.length();
    int n1 = s2.length();
    FOR(i,0,n){
        arr[s1[i]-'a']++;
    }
    FOR(i,0,n1){
        arr1[s2[i]-'a']++;
    }
    FOR(i,0,26){
        if(arr1[i]>=arr[i]){

        }else{
            return false;
        }
    }
    return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<subs(s1,s2)<<endl;
    
}