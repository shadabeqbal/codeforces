/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "02-06-2020" 
Name: A. Insomnia cure
Link: https://codeforces.com/problemset/problem/148/A
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
    set<int> st;
    int k,l,m,n,d;
    int x=1;
    cin>>k>>l>>m>>n>>d;
    while(k*x <= d){
        st.insert(k*x);
        x++;
    
    }
    x=1;
    while(l*x <= d){
        st.insert(l*x);
        x++;
    }
    x=1;
    while(m*x <= d){
        st.insert(m*x);
        x++;
    }
    x=1;
    while(n*x <= d){
        st.insert(n*x);
        x++;
    }
    
    cout<<st.size();
    return 0;
}