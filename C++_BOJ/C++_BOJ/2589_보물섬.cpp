#include <iostream>
#include <queue>
#include <tuple>
#include <memory.h>

using namespace std;

const int dy[] = { -1, 1, 0, 0 };
const int dx[] = { 0, 0, -1, 1 };
char map[51][51];
int visited[51][51];

int w, h, mx;

void bfs(int y, int x)
{
	memset(visited, 0, sizeof(visited));
	visited[y][x] = 1;
	queue<pair<int, int>> q;
	q.push({ y, x });
	while (q.size())
	{
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; ++i)
		{
			int ny = dy[i] + y;
			int nx = dx[i] + x;
			if (ny < 0 || nx < 0 || ny >= w || nx >= h) continue;
			if (visited[ny][nx]) continue;
			if (map[ny][nx] == 'W') continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });
			mx = max(mx, visited[ny][nx]);
		}
	}
	return;
}
int main()
{
	cin >> w >> h;
	for (int i = 0; i < w; ++i)
	{
		string temp;
		cin >> temp;
		for (int j = 0; j < temp.size(); ++j)
		{
			map[i][j] = temp[j];
		}
	}

	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			if (map[i][j] == 'L') bfs(i, j);
		}
	}

	cout << mx - 1 << endl;
	return 0;
}