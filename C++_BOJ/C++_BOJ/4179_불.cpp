#include <iostream>
#include <queue>
#include <climits>
#include <memory.h>

using namespace std;

const int Max = 99999;
const int dy[] = { -1, 1, 0, 0 };
const int dx[] = { 0, 0, -1, 1 };

int R, C;
pair<int, int> startPos;
char map[1001][1001];
int personCheck[1001][1001];
int fireCheck[1001][1001];

bool CheckIn(int y, int x)
{
	return (y >= 0 && x >= 0 && y < R && x < C);
}

int main()
{
	cin.tie(0), cout.tie(0);
	queue<pair<int, int>> q;
	cin >> R >> C;

	fill(&fireCheck[0][0], &fireCheck[1001][1001], Max);
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			cin >> map[i][j];
			if (map[i][j] == 'J')
				startPos = { i, j };
			else if (map[i][j] == 'F')
			{
				fireCheck[i][j] = 1;
				q.push({ i, j });
			}
		}
	}

	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; ++i) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (CheckIn(ny, nx) == false) continue;
			if (map[ny][nx] == '#') continue;
			if (personCheck[ny][nx] != 0) continue;
			if (fireCheck[ny][nx] != Max) continue;
			fireCheck[ny][nx] = fireCheck[y][x] + 1;
			q.push({ ny, nx });
		}
	}

	personCheck[startPos.first][startPos.second] = 1;
	q.push({ startPos.first, startPos.second });

	int ret = 0;
	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		if (y == (R - 1) || x == (C - 1)|| y == 0 || x == 0) {
			ret = personCheck[y][x];
			break;
		}
		for (int i = 0; i < 4; ++i)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (false == CheckIn(ny, nx)) continue;
			if (map[ny][nx] == '#') continue;
			if (personCheck[ny][nx] != 0) continue;
			if (fireCheck[ny][nx] <= personCheck[y][x] + 1) continue;
			personCheck[ny][nx] = personCheck[y][x] + 1;
			q.push({ ny, nx });
		}
	}

	if (ret != 0) cout << ret << endl;
	else cout << "IMPOSSIBLE" << endl;
	return 0;
}