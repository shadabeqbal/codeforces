/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "14-06-2020" 
Name: A. Sum of Round Numbers
Link: http://codeforces.com/problemset/problem/1352/A
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,num;
    cin>>n;
    
    vll vec;
    
     while(n--){
         vec.clear();
         ll i=0,cnt=0;
         cin>>num;
        while(num!=0){
            ll k = (num%10)*(pow(10,i));
            if(k!=0){
                vec.pb(k);
                cnt++;
            }
            i++;
            num/=10;
        }

        cout<<cnt<<"\n";
        for(int i=0;i<cnt;i++)
            cout<<vec[i]<<" ";
        cout<<"\n";
     }
    
    return 0;
}