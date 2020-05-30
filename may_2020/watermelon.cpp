/*  // //  
   // //        
   \\//       
    \>>      
    //\\      
   //  \\
Author: Shadab Eqbal 
Created on:30-05-2020
//http://codeforces.com/contest/4/problem/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <iterator>
#include <climits>
#include <math.h>
#include <stdio.h>
#include <string>
#include <bits/stdc++.h>

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
    int w;
    cin >> w;
    if(w == 2)
    {
        cout<<"NO";
        return 0;
    }
    if (w % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}