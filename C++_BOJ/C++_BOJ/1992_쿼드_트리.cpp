#include <iostream>
#include <string>

using namespace std;
const int MAX = 64;
char map[MAX][MAX];

string quard(int y, int x, int size)
{
	if (size == 1) 
		return string(1, map[y][x]);
	char temp = map[y][x];
	string ret = "";
	bool flag = false;
	for (int i = y; i < y + size; ++i)
	{
		for (int j = x; j < x + size; ++j)
		{
			if (temp != map[i][j])
			{
				int nextSize = size / 2;
				ret += '(';
				ret += quard(y, x, nextSize);				// 왼쪽 위
				ret += quard(y, x + size / 2, nextSize);	// 오른쪽 위
				ret += quard(y + size / 2, x, nextSize);	// 왼쪽 아래
				ret += quard(y + size / 2, x + size / 2, nextSize); // 오른쪽 아래
				ret += ')';
				return ret;
			}
		}
	}
	return string(1, map[y][x]);
}

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); ++j)
		{
			map[i][j] = str[j];
		}
	}
	cout << quard(0, 0, N) << endl;
	return 0;
}