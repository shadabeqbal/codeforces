/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "30-05-2020" 
Name: A. Beautiful Year
Link: https://codeforces.com/problemset/problem/271/A
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


int check_unique(int n)
{
    vi vec(10);
    int flag=0;
    while(n!=0){
        if(vec[n%10] == 1)
        {
            flag=1;
            break;
        }else
        {
            vec[n%10]=1;
        }
        n/=10;
    }
    
    if(flag == 1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;i<=10000;i++){
        if(check_unique(i) == 0){
            cout<<i;
            break;
        }
    }

    return 0;
}