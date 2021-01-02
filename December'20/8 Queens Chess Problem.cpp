#include<bits/stdc++.h>
using namespace std;

#define N 8
vector<string>v,vv;

void printit()
{
    reverse(vv.begin(), vv.end());
//    cout << "SOLN\tCOLUMN\n";
//    cout << "#\t1 2 3 4 5 6 7 8\n\n";

    for(int i=0;i<vv.size();i++){
        //cout << i+1 << "\t";
        string s = vv[i];
        for(int j=0;j<N;j++){
            if(j==0){
                printf("%2d      %d", i+1, s[j]-'0');
            }
            else
                cout << ' ' << s[j];
        }
        cout << endl;
    }
}

void printSolution(int board[N][N])
{
	string s = "";
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			if(board[i][j] == 1){
                s += j + '1';
			}
	}
	v.push_back(s);
	//cout << s << endl;
}

bool isSafe(int board[N][N], int row, int col)
{
	int i, j;

	for (i = 0; i < col; i++)
		if (board[row][i])
			return false;

	for (i=row, j=col; i>=0 && j>=0; i--, j--)
		if (board[i][j])
			return false;

	for (i=row, j=col; j>=0 && i<N; i++, j--)
		if (board[i][j])
			return false;

	return true;
}

bool solveNQ(int board[N][N], int col)
{
	if (col == N){
		printSolution(board);
		return true;
	}

	bool res = false;
	for (int i = 0; i < N; i++){
		if ( isSafe(board, i, col) ){
			board[i][col] = 1;
			res = solveNQ(board, col + 1) || res;
			board[i][col] = 0;
		}
	}
	return res;
}

int main()
{

    int board[N][N];
	memset(board, 0, sizeof(board));
	solveNQ(board, 0);

	int t;
	cin >> t;
	while(t--){
        int x,y;
        cin >> x >> y;
        x--;
        cout << "SOLN       COLUMN\n";
        cout << " #      1 2 3 4 5 6 7 8\n\n";
        for(int i=0;i<v.size();i++){
            string s = v[i];
            if(s[x]-'0' == y){
                vv.push_back(v[i]);
            }
        }
        printit();
        vv.clear();
        if(t)
            cout << endl;
	}
	return 0;
}
