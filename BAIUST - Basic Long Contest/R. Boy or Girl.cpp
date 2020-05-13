/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int cnt(string s)
{
    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }

    return m.size();
}

int main()
{
    string str;
    cin >> str;

    if((cnt(str))%2==0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
}
