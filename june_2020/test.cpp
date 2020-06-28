/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "27-06-2020" 
Name: DFS
Link: 
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
#define PI 3.141592653589793238

#define pb push_back
#define mp make_pair
#define ll long long int

#define all(x) (x.begin(), x.end())

#define clr(x) memset(&x, 0, sizeof(x))

#define sort(x) sort(all(x))
#define search(x, y) binary_search(all(x), y)

#define fr(x, n) for (ll i = x; i < n; i++)
#define frk(x, n, k) for (ll i = x; i < n; i += k)
#define frit(x) for (auto i = x.begin(); i != x.end(); ++i)

typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef vector<vpi> vvpi;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vll> vvll;

// void addedge(vvpi &vec,int x,int y,int wt){
//     vec[x].pb(mp(y,wt));
//     vec[y].pb(mp(x,wt));
// }

void addedge(vvi &vec, int x, int y)
{
    vec[x].pb(y);
    vec[y].pb(x);
}

// void printGraph(vvi vec,int V){
//     for(int v=0;v<V;v++){
//         for(auto x : vec[v])
//             cout<<v<<"->"<<x.first<<" "<<x.second<<"\n";

//         cout<<"\n";
//     }
// }

void printGraph(vvi vec, int V)
{
    for (int v = 0; v < V; v++)
    {
        for (auto x : vec[v])
            cout << v << "->" << x << "\n";

        cout << "\n";
    }
}
void bfs(vvi &vec, int v, vector<int> &found)
{
    queue<int> q;
    if (!found[v])
    {
        cout << v;
        found[v] = 1;
    }
    for (auto x = vec[v].begin(); x != vec[v].end(); ++x)
    {
        
        if (!found[*x])
        {
            q.push(*x);
        }
    }
    if (!q.empty())
    {
        
        bfs(vec, q.front(), found);
        q.pop();
    }
}
void dfs(vvi &vec, int v, vector<int> &found)
{
    found[v] = 1;
    cout << v;

    for (auto x = vec[v].begin(); x != vec[v].end(); ++x)
        if (!found[*x])
            dfs(vec, *x, found);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vvi adj(7);
    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 3);
    addedge(adj, 1, 4);
    addedge(adj, 2, 5);
    addedge(adj, 2, 6);
    vector<int> found(5, 0);

    //dfs(adj, 0, found);
    bfs(adj, 0, found);
    //printGraph(adj,5);
    return 0;
}