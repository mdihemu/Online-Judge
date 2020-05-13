#include<bits\stdc++.h>
using namespace std;
#define pie 3.141592653

int main()
{
    double r,area = 0;

    //input
    cin >> r;

    area  = pie * r *r;

    //output
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
