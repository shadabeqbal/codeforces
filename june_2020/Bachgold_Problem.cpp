/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "19-06-2020" 
Name: A. Bachgold Problem
Link: https://codeforces.com/problemset/problem/749/A
*/

#include <bits/stdc++.h>

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
    ll n, cnt = 0;
    cin >> n;
    vll vec;
    
    while (n > 0)
    {
        if (n >= 3 && n % 2 != 0)
        {
            n -= 3;
            vec.pb(3);
        }
        else
        {
            n -= 2;
            vec.pb(2);
        }
        cnt++;
    }
    cout << cnt << "\n";
    for (auto x : vec)
        cout << x << " ";
    return 0;
}