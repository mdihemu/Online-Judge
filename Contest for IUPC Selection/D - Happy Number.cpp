#include <bits/stdc++.h>
using namespace std;

int square(int n)
{
	int sum = 0;
	while(n)
	{
		sum += (n % 10) * (n % 10);
		n /= 10;
	}
	return sum;
}

bool happynumber(int n)
{
	int low, last;

	low = last = n;
	do
	{
		low = square(low);

		last = square(square(last));

	}
	while (low != last);

	return (low == 1);
}

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        if (happynumber(m))
            cout << "Case #" << i+1 << ": " << m << " is a Happy number.\n";
        else
            cout << "Case #" << i+1 << ": " << m << " is an Unhappy number.\n";
    }
}
