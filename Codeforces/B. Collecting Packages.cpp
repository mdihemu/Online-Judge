#include <bits/stdc++.h>
using namespace std;

void pairsort(int a[], int b[], int n)
{
	pair<int, int> pairt[n];

	for (int i = 0; i < n; i++)
	{
		pairt[i].first = a[i];
		pairt[i].second = b[i];
	}

	sort(pairt, pairt + n);

	for (int i = 0; i < n; i++)
	{
		a[i] = pairt[i].first;
		b[i] = pairt[i].second;
	}
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
        }
        pairsort(a, b, n);
        char c[100];

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	for (int i = 0; i < n; i++)
		cout << b[i] << " ";

		for(int i=0;i<n;i++){
            if()
		}

    }
}


