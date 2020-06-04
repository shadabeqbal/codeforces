/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "05-06-2020" 
Name: A. Fox And Snake
Link: https://codeforces.com/problemset/problem/510/A
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
    int row,col;
    int alt=0;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        
        if(i%2==0){
        for(int j=0;j<col;j++)
            cout<<"#";
        if(i!=row-1)
            cout<<"\n";
        }else{
        for(int j=0;j<col;j++){
            if(alt%2 == 0  &&  j!=col-1){
                cout<<".";
            }
            else if(alt%2 == 0  &&  j==col-1){
                cout<<"#";
            }else if(alt%2 == 1  &&  j==0){
                cout<<"#";
            }else if(alt%2 == 1  &&  j!=0){
                cout<<".";
            }
        }
        if(i!=row-1)
            cout<<"\n";
        
        alt++;
    }
    }
    return 0;
}