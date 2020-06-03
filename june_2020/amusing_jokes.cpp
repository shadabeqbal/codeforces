/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "03-06-2020" 
Name: A. Amusing Joke
Link: https://codeforces.com/problemset/problem/141/A
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
    string str,str1,str2;
    cin>>str>>str1>>str2;
    vi vec_in(26);
    for(int i=0;i<int(str.length());i++)
        vec_in[str[i]-65]++;
    
    for(int i=0;i<int(str1.length());i++)
        vec_in[str1[i]-65]++;
    
    for(int i=0;i<int(str2.length());i++)
        vec_in[str2[i]-65]--;

    for(int i=0;i<26;i++){
        if(vec_in[i] != 0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}