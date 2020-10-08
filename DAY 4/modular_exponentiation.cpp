#include<bits/stdc++.h>
using namespace std;

int recursive_mod(int a,int b,int c){
    if(b==0){
        return 1;
    }
    
    if(b%2==0){
        return recursive_mod((a*a)%c,b/2,c);
    }else{
        return ((a%c) * recursive_mod(a%c,b/2,c))%c;
    }
}

int main()
{
    cout<<recursive_mod(2,2,5)<<endl;
}
