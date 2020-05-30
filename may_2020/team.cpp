/*  // //  
   // //        
   \\//       
    \>>      
    //\\      
   //  \\
Author: Shadab Eqbal 
Created on:30-05-2020
//http://codeforces.com/problemset/problem/158/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <iterator>
#include <climits>
#include <string>

#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pi>
#define ll long long int
#define vll vector<ll>

using namespace std;

int main()
{
    int n, x, y, z;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        if ((x & y) == 1 || (x & z) == 1 || (y & z) == 1)
            ans++;
    }
    cout << ans;
}