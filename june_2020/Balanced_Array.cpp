/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "14-06-2020" 
Name: B. Balanced Array
Link: http://codeforces.com/problemset/problem/1343/B
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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll i=0,x=2,pos_sum=0,y=1,neg_sum=0;
        vll vec(n);
        if((n/2)%2 != 0){
            cout<<"NO\n";
        }else{
            while(i < n/2){
                vec[i]=x;
                i++;
                pos_sum+=x;
                x+=2;
            }
            while(i < n-1){
                vec[i]=y;
                i++;
                neg_sum+=y;
                y+=2;
            }
            if(pos_sum > neg_sum)
                vec[n-1]=pos_sum-neg_sum;
            cout<<"YES\n";
            for(int x: vec)
                cout<<x<<" ";
            cout<<"\n";
        }

    }
    return 0;
}