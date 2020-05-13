#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while((scanf("%d%d",&a,&b)!=EOF)){
        int count=0;
        if(a==0 && b==0)
            return 0;
        else{
            for(int j=a;j<=b;j++){
                double x=sqrt(j);
                if(x==(int)x)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
