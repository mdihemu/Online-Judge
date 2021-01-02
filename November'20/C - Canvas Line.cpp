#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n;
    cin >> n;
    int a[n][2];
    for(int i=0;i<n;i++)
        cin >> a[i][0] >> a[i][1];
    int x;
    cin >> x;
    int temp[x];
    set<int>b;
    vector<int>ans;
    for(int i=0;i<x;i++){
        int l;
        cin >> l;
        b.insert(l);
        temp[i] = l;
    }
    bool ok = true;
    for(int i=0;i<n;i++){
        int p = a[i][0], q = a[i][1];
        int cnt = 0;
        for(int r:b){
            if(r>=p && r<=q)
                cnt++;
        }
        if(cnt>2){
            ok = false;
            break;
        }
        else if(cnt==2)
            continue;
        else if(cnt==1){
            b.insert(q);
            ans.push_back(q);
        }
        else if(cnt==0){
            b.insert(q);
            ans.push_back(q);
            q--;
            b.insert(q);
            ans.push_back(q);
        }
    }
    if(!ok){
        cout << "impossible\n";
        return 0;
    }


    int p = ans.size();
    cout << p << endl;
    int cnt[p];
    int j=0;
    for(int i:ans){
        cnt[j] = i;
        j++;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<p;j++){
            if(temp[i] == cnt[j]){
                cnt[j] = cnt[j]-1;
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<p;j++){
            if(temp[i] == cnt[j]){
                cnt[j] = cnt[j]-1;
            }
        }
    }
    for(int i=0;i<p;i++)
        cout << cnt[i] << " ";
    cout << endl;
    return 0;
}
