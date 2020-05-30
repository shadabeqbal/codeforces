/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "30-05-2020" 
Name: A. Magnets
Link: https://codeforces.com/problemset/problem/344/A
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
    int n,g=0;
    cin>>n;
    string str;
    string temp="  ";
    for(int i=0;i<n;i++){
        cin>>str;
        if((str == "01" && 
        temp.substr(temp.length()-2,temp.length()-1) == "10") || 
        (str == "10" && 
        temp.substr(temp.length()-2,temp.length()-1) == "01"))
            g++;
        
        temp+=str;

    }
    cout<<g+1;
    return 0;
}