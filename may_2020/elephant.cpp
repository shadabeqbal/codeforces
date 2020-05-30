/*  // //  
   // //        
   \\//       
    \>>      
    //\\      
   //  \\
Author: Shadab Eqbal 
Created on: "30-05-2020" 
Name: A. Elephant
Link: https://codeforces.com/problemset/problem/617/A
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
    int n,cnt=0;
    cin>>n;
    while(n!=0){
        if(n>=5){
            n-=5;
            cnt++;
        }
        else if(n==4){
            n-=4;
            cnt++;
        }
        else if(n==3){
            n-=3;
            cnt++;
        }
        else if(n==2){
            n-=2;
            cnt++;
        }
        else if(n==1){
            n-=1;
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}