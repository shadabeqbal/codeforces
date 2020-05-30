/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "30-05-2020" 
Name: A. Translation
Link: https://codeforces.com/problemset/problem/41/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <iterator>
#include <climits>
#include <string>
#include <math.h>

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
    string str1, str2;
    cin >> str1 >> str2;

    reverse(str1.begin(), str1.end());

    if (str1 == str2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}