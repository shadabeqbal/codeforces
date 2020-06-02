/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "31-05-2020" 
Name: A. Calculating Function
Link: https://codeforces.com/problemset/problem/486/A
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
    
    long double num,terms;
    cin >> num;
    if(fmod(num,2)==1){
        terms=ceil(num/2);
        cout<<fixed<<setprecision(0)<<-terms;
    }else{
        terms=ceil(num/2);
        cout<<fixed<<setprecision(0)<<terms;
    }
    
    return 0;
}