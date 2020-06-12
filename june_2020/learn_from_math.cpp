/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "12-06-2020" 
Name: A. Design Tutorial: Learn from Math
Link: http://codeforces.com/problemset/problem/472/A
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
int isPrime(ll n){
    for(ll i=2;i<=n/2;i++){
        if(n%i == 0){
            return 1;
        }
    }

    return 0;
}

void foo(ll n,ll one,ll two){
    
    if(isPrime(one) == 1 && isPrime(two) == 1){
        cout<<one<<" "<<two;
        return ;
    }else{
        foo(n,--one,++two);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    foo(n,floor(n/2),(n-floor(n/2)));
    return 0;
}