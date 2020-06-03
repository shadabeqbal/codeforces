/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "03-06-2020" 
Name: A. Games
Link: https://codeforces.com/problemset/problem/268/A
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
    vi vec(26);
    int n;
    cin>>n;
    string str;
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    if(str.length()<26){
        cout<<"NO";
        return 0;
    }else{
        for(int i=0;i<n;i++)
            vec[str[i]-97]++;
    }

    for(int i:vec)
    {
        if(i == 0){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}