#include <iostream>

using namespace std;

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };
char map[10][10];
int visited[10][10];
int R, C, K;
int go(int y, int x)
{
	if (y == 0 && x == C - 1) {
		if (K == visited[y][x]) return 1;
		return 0;
	}
	int ret = 0;
	for (int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= R || nx >= C || visited[ny][nx] || map[ny][nx] == 'T') continue;
		visited[ny][nx] = visited[y][x] + 1;
		ret += go(ny, nx);
		visited[ny][nx] = 0;
	}
	return ret;
}

int main()
{
	cin >> R >> C >> K;
	for (int i = 0; i < R; ++i)
	{
		string temp;
		cin >> temp;
		for (int j=0;j<C;++j)
		{
			map[i][j] = temp[j];
		}
	}
	visited[R - 1][0] = 1;
	cout << go(R - 1, 0) << endl;
}