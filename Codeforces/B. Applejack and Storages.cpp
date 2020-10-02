#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<int> vec;
void printFrequency()
{
    map<int, int> M;

    for (int i = 0; vec[i]; i++) {
        if (M.find(vec[i]) == M.end()) {
            M[vec[i]] = 1;
        }

        else {
            M[vec[i]]++;
        }
    }
    /*
    for (auto& it : M) {
        cout << it.first << ' '
             << it.second << '\n';
    }*/
    //vector<int>x;
    int two=0,four=0,six=0;
    for (auto& it : M) {
        if(it.second>=6)
            six++;
        else if(it.second>=4)
            four++;
        else if(it.second>=2)
            two++;
    }
    cout << two << ' ' << four << ' ' << six << endl;
    if((two>=2 && four>=1) || four>=2 || (six>=1 && two>=1))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    //vector<int>v(n);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }
    int q;
    cin >> q;
    while(q--){
        int a;
        char ch;
        cin >> ch >> a;
        if(ch=='+')
            vec.push_back(a);
        else{
            for(auto i = vec.begin();i!=vec.end();i++){
                if(*i == a){
                    vec.erase(i);
                    break;
                }
            }
        }/*
        for(auto i = vec.begin();i!=vec.end();i++)
            cout << *i << " ";
        cout << endl;
        /*
        if(v.size()<8)
            cout << "NO\n";
        else{*/
            printFrequency();
            //cout << "YES\n";
        //}
    }
    return 0;
}
