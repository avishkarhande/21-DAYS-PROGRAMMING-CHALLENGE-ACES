#include<bits/stdc++.h>
using namespace std;

void print(int **edges,int n,int sv,int *visited){
    cout<<sv<<endl;
    visited[sv]=1;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]){
            if(visited[i]){
                continue;
            }else{
                print(edges,n,i,visited);
            }
        }
    }
}

int main(){
    int n,e;
    cin >> n >> e;
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    int *visited = new int [n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    print(edges,n,0,visited);
    return 0;
}