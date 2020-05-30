/*  //  //  
   //  //        
   \\ //       
    \>>      
    //\\      
   //  \\
Author: Shadab Eqbal 
Created on: "30-05-2020" 
Link: 
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

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int n, i,flag=0;
    cin >> n >> i;
    string str;
    cin >> str;
    string temp = str;
    for (int x = 0; x < i; x++)
    {
        for (int i = 0; i < int(str.length()) - 1; i++)
        {
            if (temp[i] == 'B' && temp[i + 1] == 'G'){
                swap(&str[i], &str[i + 1]);
                flag=1;
            }
        }
        temp=str;
        if(flag == 0)
            break;
        
        flag=0;
    }
    cout << str;
    return 0;
}