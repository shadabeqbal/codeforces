/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "03-06-2020" 
Name: B. K-th Beautiful String
Link: https://codeforces.com/contest/1328/problem/B
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
    int t;
    cin>>t;
    while(t--){
		int n, k;
		cin >> n >> k;
		int p1=0, p2=0;
		for(int i = n-2; ~i; i--){
			if(k<=n-i-1){
				p1 = i;
				p2 = n-k;
				break;
			}
			else{
				k -= n-i-1;
			}
		}
		for(int i = 0; i < n; i++){
			if(i == p1 || i == p2){
				cout <<"b";
			}
			else cout <<"a";
		}
		cout <<"\n";
	}
    return 0;
}