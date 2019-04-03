#include <iostream>
using namespace std;
#define ll long long int
bool g[5][5];
void add(ll u,ll v)
{
    g[u][v]=g[v][u]=1;
}
void dfs(ll s,bool marked[]){
    marked[s]=true;
    cout<<s<<" ";
    for(ll i=0;i<5;i++)
    {
        if(!marked[i])
        {
            dfs(i,marked);
        }
    }
}

int main()
{

    bool marked[5]={};
    add(0,1);
    add(0,2);
    add(0,3);
    add(3,4);
    dfs(0,marked);
    return 0;
}