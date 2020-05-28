//Author: Shadab Eqbal
//http://codeforces.com/problemset/problem/71/A

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
    int t;
    string temp = "";
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (str.length() > 10)
        {
            temp = str[0] + to_string(str.length()-2) + str[str.length() - 1];
        }
        else
        {
            temp = str;
        }
        cout << temp<<"\n";
        temp = "";
    }

    return 0;
}