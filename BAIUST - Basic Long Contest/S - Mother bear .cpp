/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main()
{
    char a[1000],a2[1000];
    while(1){
        gets(a);
        int x = strcmp( "DONE" , a);
        if(x==0)
            break;

        int i,j = 0;
        for(i = 0; a[i] != NULL; i++){
            if(a[i] >= 'a' && a[i] <= 'z'){
                a[j] = a[i];
                j++;
            }
            else if(a[i] >= 'A' && a[i] <= 'Z'){
                a[j] = a[i] + 32;
                j++;
            }
        }

        a[j] = NULL;
        j = j -1;

        for(i=0;a[i] != NULL; i++){
            a2[i] = a[j];
            j--;
        }
        a2[i] = NULL;

        int y = strcmp(a,a2);
        if(y==0)
            cout << "You won't be eaten!\n";
        else
            cout << "Uh oh..\n";
    }
    return 0;
}
