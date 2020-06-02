/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "03-06-2020" 
Name: A. Anton and Polyhedrons
Link: https://codeforces.com/problemset/problem/785/A
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
    int n;
    cin>>n;
    string str;
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str == "Icosahedron")
            ans+=20;
        else if(str == "Cube")
            ans+=6;
        else if(str == "Tetrahedron")
            ans+=4;
        else if(str == "Octahedron")
            ans+=8;
        else if(str == "Dodecahedron")
            ans+=12;
    }

    cout<<ans;
    return 0;
}