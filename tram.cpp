//Author: Shadab Eqbal
//https://codeforces.com/problemset/problem/116/A

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
    int n,exit,enter,curr_cap=0,max_cap=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>exit>>enter;
        curr_cap=curr_cap-exit+enter;
        if(curr_cap > max_cap)
            max_cap=curr_cap;


    }

    cout<<max_cap;
}