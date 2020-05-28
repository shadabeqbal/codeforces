//Author: Shadab Eqbal
//http://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <iterator>
#include <climits>
#include <string>

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
    int n,k,cnt=0;
    cin >> n>>k;
    vi vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]>0 && vec[i]>=vec[k-1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}