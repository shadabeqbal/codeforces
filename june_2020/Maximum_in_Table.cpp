/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "17-06-2020" 
Name: A. Maximum in Table
Link: https://codeforces.com/problemset/problem/509/A
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vvi vec(n,vi(n,0));
    
    for(int i=0;i<n;i++)
        vec[0][i]=1;
    
    for(int i=0;i<n;i++)
        vec[i][0]=1;
    
    for(int i=1;i<n;i++)
        for(int j=1;j<n;j++)
            vec[i][j]=vec[i][j-1]+vec[i-1][j];
        
    
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++){
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<vec[n-1][n-1];
    return 0;
}