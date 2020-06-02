/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "03-06-2020" 
Name: A. Is your horseshoe on the other hoof?
Link: https://codeforces.com/problemset/problem/228/A
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
    ll s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int cnt=0;
    if(s1 == s2 || s1 == s3 || s1 == s4)
        cnt++;
    if(s2 == s3 || s2 == s4)
        cnt++;
    if(s3 == s4)
        cnt++;
    
    cout<<cnt;
    return 0;
}