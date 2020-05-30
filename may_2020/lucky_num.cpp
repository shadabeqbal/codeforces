/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "30-05-2020"
Name: A. Nearly Lucky Number
Link: https://codeforces.com/problemset/problem/110/A
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
    int s=0,f=0;
    ll lucky;
    cin >> lucky;
    while (lucky != 0)
    {
        if (lucky % 10 == 7)
            s++;
        else if(lucky %10 == 4)
            f++;
        
        lucky /= 10;
    }
    if (s+f == 7 || s+f == 4)
        cout << "YES";
    else
        cout << "NO";
}