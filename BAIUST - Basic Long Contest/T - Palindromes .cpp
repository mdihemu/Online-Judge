/*
Author: DarkMotion
*/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

bool sentencePalindrome(string str)
{
	int l = 0, h = str.length();

	for (int i = 0; i < h; i++)
		str[i] = tolower(str[i]);

	while (l <= h) {

		if (!(str[l] >= 'a' && str[l] <= 'z'))
			l++;

		else if (!(str[h] >= 'a' && str[h] <= 'z'))
			h--;

		else if (str[l] == str[h])
			l++, h--;

		else
			return false;
	}

	return true;
}

int main()
{
	string str;
	while(cin >> str){
        if (sentencePalindrome(str))
            cout << "You won't be eaten!\n";
        else
            cout << "Uh oh..\n";

	}

	return 0;
}

