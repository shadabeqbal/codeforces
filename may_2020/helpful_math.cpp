/*  // //  
   // //        
   \\//       
    \>>      
    //\\      
   //  \\
Author: Shadab Eqbal 
Created on:30-05-2020
Name: A. Helpful Maths
Link: https://codeforces.com/problemset/problem/339/A
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
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int size=str.length();
    string temp=str.substr(size/2,size);
    for(int i=1;i<int(str.length());i+=2){
        temp.insert(i,1,'+');
    }
    cout<<temp;
}