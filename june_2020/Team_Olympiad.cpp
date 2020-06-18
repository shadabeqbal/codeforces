/*  // //  
   // //        
   \\//       
    \>>      
    //\\     
   //  \\
Author: Shadab Eqbal 
Created on: "18-06-2020" 
Name: A. Team Olympiad
Link: https://codeforces.com/problemset/problem/490/A
*/

#include <bits/stdc++.h>

#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
#define PI 3.141592653589793238
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define ll long long int
#define pll pair<ll, ll>
#define vpl vector<pll>
#define vll vector<ll>
#define vvll vector<vll>
#define sort(x) sort(x.begin(), x.end())
#define search(x, y) binary_search(x.begin(), x.end(), y)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x;
    cin >> t;
    vi vec(3, 0);
    vi arr;
    while (t--)
    {
        cin >> x;
        arr.pb(x);
        if (x == 1)
        {
            vec[0]++;
        }
        else if (x == 2)
            vec[1]++;
        else
            vec[2]++;
    }
    sort(vec);
    cout << vec[0]<<"\n";
    int y = vec[0];

    vi::iterator p;
    while (y--)
    {

        if ((p = find(arr.begin(), arr.end(), 1)) != arr.end())
        {
            cout << p - arr.begin()+1<<" ";
            arr[p-arr.begin()]=-1;
            if ((p = find(arr.begin(), arr.end(), 2)) != arr.end())
            {
                cout << p - arr.begin()+1<<" ";
                arr[p-arr.begin()]=-1;

                if ((p = find(arr.begin(), arr.end(), 3)) != arr.end())
                {
                    cout << p - arr.begin()+1<<" ";
                    arr[p-arr.begin()]=-1;
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}