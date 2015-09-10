# DFS
Algoritmo de recorrido de grafos por profundidad
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
int n,m;
vector<vi> G;
vector<bool> V;
void dfs(int j)
{
    cout<<j<<" ";
    V[j]=true;
    for(int i=0;i<G[j].size();i++)
        if(!V[G[j][i]])
            dfs(G[j][i]);
}
int main()
{
    cin>>n>>m;
    G.assign(n,vi());
    int a,b;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        G[a].push_back(b);
    }
    V.assign(n,false);
    dfs(0);
    return 0;
}
