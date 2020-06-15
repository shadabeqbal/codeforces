/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "15-06-2020" 
Name: A. The New Year: Meeting Friends
Link: http://codeforces.com/problemset/problem/723/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <iterator>
#include <climits>
#include <string>
#include <math.h>
#include <iomanip>

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
    vi vec(3);
    cin>>vec[0]>>vec[1]>>vec[2];
    sort(vec);
    int sum = (vec[1]-vec[0])+(vec[2]-vec[1]);
    
    cout<<sum;
    return 0;
}