#include<bits/stdc++.h>
using namespace std;

void printDFS(int **edges,int n,int sv,bool *visited){
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
                printDFS(edges,n,i,visited);
            }
        }
    }
}

void DFS(int** edges,int n){
    bool *visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = 0;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printDFS(edges,n,i,visited);
        }
    }
    delete [] visited;
}

void printBFS(int **edges,int n,int sv,bool* visited){
    queue<int>pendingvertices;
    
    // bool *visited = new bool[n];
    // for(int i=0;i<n;i++){
    //     visited[i] = 0;
    // }
    pendingvertices.push(sv);
    visited[sv] = 1;
    while(!pendingvertices.empty()){
        int front = pendingvertices.front();
        pendingvertices.pop();
        cout<<front<<endl;
        for(int i=0;i<n;i++){
            if(i==front){

            }
            if(edges[front][i]==1 && !visited[i]){
                pendingvertices.push(i);
                visited[i] = true;
            }
        }
    }
}

void BFS(int** edges,int n){
    bool *visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = 0;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printBFS(edges,n,i,visited);
        }
    }
    delete [] visited;
}

bool has_util(int **edges,int n,int sv,bool *visited){
    if(edges[sv][n]){
        return true;
    }
    visited[sv]=1;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        else if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }else{
                return has_util(edges,n,i,visited);
            }
        }
    }
    return false;
}


    
// }



int main(){
    int n,e,sv,ev;
    cin >> n >> e >> sv >>ev;
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
    bool *visited = new bool [n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    // DFS(edges,n);
    // BFS(edges,n);
    cout<<has_util(edges,ev,sv,visited);
    // for(int i=0;i<e;i++){
    //     for(int j=0;j<e;j++){
    //         cout<<edges[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}