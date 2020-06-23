/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "23-06-2020" 
Name: B. Honest Coach
Link: https://codeforces.com/problemset/problem/1360/B
*/

#include<bits/stdc++.h>

#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
#define PI 3.141592653589793238
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define ll long long int
#define pll pair<ll, ll>
#define vpl vector<pll>
#define vll vector<ll>
#define vvll vector<vll>
#define sort(x) sort(x.begin(), x.end())
#define search(x, y) binary_search(x.begin(), x.end(), y)

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    ll n,x;
    cin>>t;
    vll team1,team2;
    while(t--){
        cin>>n;
        vll vec(n);
        while(n--){
            cin>>x;
            vec.pb(x);
            sort(vec);
            for(int y=0;y<vec.size();y+=2)
                team1.pb(vec[y]);
            
            for(int y=1;y<vec.size();y+=2)
                team2.pb(vec[y]);

            
        }
        cout<<team2[team2.size()-1] - team1[0];
    }
    return 0;
}