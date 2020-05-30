/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "30-05-2020" 
Name: A. George and Accommodation
Link: https://codeforces.com/problemset/problem/467/A
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
#include <math.h>

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
    int n,p,q,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        if(q-p >= 2)
            cnt++;
    }
    cout<<cnt;
    return 0;
}