#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}

int calculation(int a,int b,int x,int y,int n)
{
    int mn = min(n,a-x);
    a -= mn;
    n -= mn;

    mn = min(n,b-y);
    b -= mn;

    return a*b;
}

void solve()
{
    int a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
    cout << min(calculation(a,b,x,y,n),calculation(b,a,y,x,n)) << endl;
}

/*
void solve()
{
    int a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
    int cnt = LLONG_MAX;
    for(int i=0;i<2;i++){
        int aa = min(n,a-x);
        int bb = min(n-aa,b-y);
        cnt = min(cnt,(a-aa)*(b-bb));
        swap(a,b);
        swap(x,y);
    }
    cout << cnt << endl;
}
*/

/*
void solve()
{
    int a,b,x,y,n,cnt=0,aa=0,bb=0,nn=0,xx=0,yy=0;
    cin >> a >> b >> x >> y >> n;
    aa =a;
    bb=b;
    xx=x;
    yy=y;
    nn=n;

    int p = a-x;
    int q = b-y;
    if(q>p){
        swap(a,b);
        swap(x,y);
    }
    p = a-x;
    int mn = min(p,n);
    a = a-mn;
    //cout <<  a << endl;
    n -= mn;
    if(a<=0){
        a++;
        n++;
    }
    p = b-y;
    mn = min(p,n);
    b-=mn;
    //cout <<  b << endl;
    n-=mn;
    if(b<=0){
        b++;
        n++;
    }
    cnt = a*b;
    a=aa,b=bb,x=xx,y=yy,n=nn;
    if(a>b){
        swap(a,b);
        swap(x,y);
    }
    p = a-x;
    mn = min(p,n);
    a = a-mn;
    //cout <<  a << endl;
    n -= mn;
    if(a<=0){
        a++;
        n++;
    }
    p = b-y;
    mn = min(p,n);
    b-=mn;
    //cout <<  b << endl;
    n-=mn;
    if(b<=0){
        b++;
        n++;
    }
    int cnt2 = a*b;
    cout << min(cnt,cnt2) << endl;
}
*/
