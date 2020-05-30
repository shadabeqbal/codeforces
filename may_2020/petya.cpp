/*  // //  
   // //        
   \\//       
    \>>      
    //\\      
   //  \\
Author: Shadab Eqbal 
Created on:30-05-2020
//http://codeforces.com/problemset/problem/112/A
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
#include<bits/stdc++.h> 

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
    string str1;
    string str2;
    int flag=0;
    cin>>str1>>str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    for(int i=0;i<int(str1.length());i++){
        
        if(str1[i] < str2[i]){
            flag = -1;
            break;
        }
        if(str1[i] > str2[i]){
            flag = 1;
            break;
        }
       
    }

    cout<<flag;

}