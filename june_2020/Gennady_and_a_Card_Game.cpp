/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "20-06-2020" 
Name: A. Gennady and a Card Game
Link: https://codeforces.com/problemset/problem/1097/A
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
    int n=5;
    string s1,s2;
    cin>>s1;
    while(n--){
        cin>>s2;
        if(s2[0] == s1[0] || s2[1] == s1[1])
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    
    return 0;
}