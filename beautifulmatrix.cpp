/*  // //  
   // //        
   \\//       
    \\>>      
    //\\      
   //  \\
Author: Shadab Eqbal 
Created on:30-05-2020
//http://codeforces.com/problemset/problem/263/A
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
    int row=12;
    int col=12;
    int mid_row=ceil(row/2);
    int mid_col=ceil(col/2);
    int mat[row][col];
    pair<int, int> pr;
    for (int i = 1; i <= row-1; i++)
    {
        for (int j = 1; j <= col-1; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1){
                pr.first=i;
                pr.second=j;
            }
        }
    }
    
    int x = 0, y = 0;
    for (int i = 1; i <= row-1; i++)
    {
        for (int j = 1; j <= col-1; j++)
        {
            x = abs(pr.first - mid_row);
            y = abs(pr.second - mid_col);
        }
    }
    cout << x + y;
}