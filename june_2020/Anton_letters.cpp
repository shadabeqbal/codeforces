/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "03-06-2020" 
Name: A. Anton and Letters
Link: https://codeforces.com/problemset/problem/443/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
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
    string str="";
    int cnt=0;
    getline(cin,str);
    vector<char> vec;
    for(int i=1;i<int(str.length());i+=3){
        if(find(vec.begin(),vec.end(),str[i]) == vec.end() && str[i] >= 'a' && str[i] <= 'z'){
            vec.push_back(str[i]);
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}