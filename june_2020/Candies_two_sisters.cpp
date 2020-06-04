/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "04-06-2020" 
Name: A. Candies and Two Sisters
Link: https://codeforces.com/problemset/problem/1335/A
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
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define vii vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pi>
#define ll long long int
#define vll vector<ll>

using namespace std;

ll foo(ll n){
    ll cnt=0;
    if(n <= 2)
        cnt=0;
    else{
        if(n%2)
            cnt=n/2;
        else
            cnt=(n/2)-1;
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        cout<<foo(n)<<"\n";
    }
    return 0;
}