/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "02-06-2020" 
Name: A. Arrival of the General
Link: https://codeforces.com/problemset/problem/144/A
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
void swap(int *x,int *y){
    int temp=*x;
    *x = *y;
    *y = temp;
}

int min_index(int *a,int sz){
    int index=0;
    for(int i=0;i<sz;i++)
    {
        if(a[index] >= a[i])
            index=i;
    }

    return index;
}
int max_index(int *a,int sz){
    int index=0;
    for(int i=0;i<sz;i++)
    {
        if(a[index] < a[i])
            index=i;
    }
    for(int i=index;i>=1;i--)
        swap(a[i],a[i-1]);
    
    return index;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int ma_index=max_index(arr,n);
    int mi_index=min_index(arr,n);

    int ans = ma_index+(n-mi_index-1);

    cout<<ans;
    return 0;
}