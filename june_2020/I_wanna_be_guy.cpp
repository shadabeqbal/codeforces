/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "02-06-2020" 
Name: A. I Wanna Be the Guy
Link: https://codeforces.com/problemset/problem/469/A
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
#include <set>

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
    int n,p,q,x;
    cin>>n>>p;
    set<int> st;
    for(int i=0;i<p;i++){
        cin>>x;
        st.insert(x);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        st.insert(x);
    }
    
    if(int(st.size()) == n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}