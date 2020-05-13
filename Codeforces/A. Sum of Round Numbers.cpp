/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 100001;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a=0,b=0,c=0,d=0,e=0,cnt=0;
        if(n<10){
            cout << 1 << "\n" << n << "\n";
        }
        else if(n<100){
            a = n%10;
            b = n/10;
            if(a!=0)
                cnt++;
            if(b!=0)
                cnt++;
            cout << cnt << "\n";
            if(cnt==2)
                cout << a << " " << b*10 << "\n";
            else
                cout << b*10 << endl;
        }
        else if(n<1000){
            a = n%10;
            n = n/10;
            b = n%10;
            b*=10;
            n = n/10;
            c = n%10;
            c*=100;
            if(a!=0)
                cnt++;
            if(b!=0)
                cnt++;
            if(c!=0)
                cnt++;
            cout << cnt << "\n";
            if(cnt==3)
                cout << a << " " << b << " " << c << "\n";
            else if(cnt == 2){
                if(a==0){
                    cout << b << " " << c << "\n";
                }
                else if(b==0){
                    cout << a << " " << c << "\n";
                }
                else
                    cout << a << " " << b << "\n";
            }
            else
                cout << c << "\n";
        }
        else if(n<10000){
            a = n%10;
            n = n/10;
            b = n%10;
            b*=10;
            n = n/10;
            c = n%10;
            c*=100;
            n = n/10;
            d = n%10;
            d*=1000;
            int k[4];
            k[0] =a,k[1] = b, k[2] = c,k[3] = d;
            for(int i=0;i<4;i++){
                if(k[i]!=0)
                    cnt++;
            }
            cout << cnt << "\n";
            for(int i=0;i<4;i++){
                if(k[i]!=0)
                    cout << k[i] << " ";
            }
            cout << "\n";
        }
        else
            cout << 1 << "\n"<< n << "\n";
    }
}

