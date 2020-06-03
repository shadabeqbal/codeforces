/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "03-06-2020" 
Name: A. Divisibility Problem
Link: https://codeforces.com/problemset/problem/1328/A
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

int main()
{
    int t;
    ll a,b,cnt=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b != 0)
            cnt=b-(a%b);
        else
            cnt=0;
        cout<<cnt<<"\n";
    }
    return 0;
}