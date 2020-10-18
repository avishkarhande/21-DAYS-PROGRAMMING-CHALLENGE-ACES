// C++ program to find length of the longest 
// consecutive 1s in binary reprsentation of 
// a number. 
#include<bits/stdc++.h> 
using namespace std; 
  
int maxConsecutiveOnes(int x) 
{ 
    // Initialize result 
    int count = 0; 
  
    // Count the number of iterations to 
    // reach x = 0. 
    while (x!=0) 
    { 
        // This operation reduces length 
        // of every sequence of 1s by one. 
        x = (x & (x << 1)); 
  
        count++; 
    } 
  
    return count; 
} 
  
// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n];
        int x=0,y=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]=='X'){
                x++;
            }else{
                y++;
            }
        }
        int ans = 1, temp = 1; 
  
        // Traverse the array 
        for (int i = 1; i < n; i++) { 
  
        // If elemet is same as 
        // previous increment temp value 
        if (arr[i] =='Y' && arr[i-1] == 'Y') { 
            ++temp; 
        } 
        else { 
            ans = max(ans, temp); 
            temp = 1; 
        } 
    } 
    ans = max(ans, temp); 
    cout<<ans+x<<endl;
    }
     
} 