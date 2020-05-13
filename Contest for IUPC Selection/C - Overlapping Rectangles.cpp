#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a,b,c,d,m,n,o,p;
    while(N--){
        cin >> a>>b>>c>>d;
        cin >> m>>n>>o>>p;

        int w,x,y,z;
        w = max(a,m);
        x = max(b,n);
        y = min(c,o);
        z = min(d,p);

        if(w >= y || x>= z){
            cout << "No Overlap\n";
            if(N != 1)
                cout << endl;
        }
        else{
            printf("%d %d %d %d\n",w,x,y,z);
            if(N != 1)
                cout << endl;
        }

    }
    return 0;
}
