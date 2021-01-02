#include<iostream>
using namespace std;

int main()
{
    while(1){
        double l;
        cin >> l;
        if(!l)
            break;
        int i = 2;
        double cnt = 0.0;
        while(1){
            cnt += 1.0/i;
            if(cnt >= l)
                break;
            i++;
        }
        cout << i-1 << " card(s)\n";
    }
}
