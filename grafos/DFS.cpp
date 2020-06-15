#include <bits/stdc++.h>
#define MAX 105

using namespace std;

vector<int> g[MAX];
bool mark[MAX];

bool dfs(int A,int B,int color){
    if(mark[A]) return false;
    mark[A]=true;

    if(A==dest){
        /*code*/
        return true;
    }

    for(auto p: castelos[A]){
        if(dfs(p,B,color)){
            /*code*/
            return true;
        }
    }
    return false;

}

int main(){
    int N,M,A,B;

    cin >> N >> M;

    for(int i=1;i<N;i++){
        cin >> A >> B;
        g[A].push_back(B);
        g[B].push_back(A);
    }
    for(int i=0;i<M;i++){
        int C;
        for(int x=0;x<=105;x++){
            mark[x]=false;
        }
        cin >> A >> B >> C;
        dfs(A,B,C);
    }

    return 0;
}
