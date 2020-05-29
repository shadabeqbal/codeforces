/*  // //  
   // //        
   \\//       
    \\>>      
    //\\      
   //  \\
Author: Shadab Eqbal 
Created on:30-05-2020
//https://codeforces.com/problemset/problem/266/A
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
    int n,cnt=0,flag=0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < int(str.length()); i++)
    {
        if(str[i] == str[i+1])
            cnt++;
    }
    cout << cnt;
}