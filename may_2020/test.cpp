#include <iostream>
using namespace std;

int main()
{
    map<char,int> mp;
    string str="abrexrzx";
    string max_str="";
    int init=0,fin=0;
    for(int i=0;i<str.length();i++){
        if(mp.find(str[i]) != mp.end()){
            if(str.substring(init,i-1).length()>max_str.length())
                max_str=str.substr(init,i-1);
            init=i;
            mp[str[i]]++;
        }else{
            mp.insert(pair<char,int>(str[i],1));
        }
    }
    cout<<max_str;
}