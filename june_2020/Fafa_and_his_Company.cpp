/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "21-06-2020" 
Name: A. Fafa and his Company
Link: https://codeforces.com/problemset/problem/935/A
*/

#include<bits/stdc++.h>

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
    ll n;
    cin>>n;
    ll lead = 0,mem =n,cnt=0;
    while(lead!=mem){
        lead++;
        if((mem-lead)%lead == 0)
            cnt++;

    }
    cout<<cnt-1;
    return 0;
}