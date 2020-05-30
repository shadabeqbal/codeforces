/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal
Created on: "30-05-2020"
Name: A. Presents
Link: https://codeforces.com/problemset/problem/136/A
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
    int n, x;
    cin >> n;
    int arr[101];
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        arr[x] = i;
    }

    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}