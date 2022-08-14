#include <iostream>
#include <algorithm>
#include <vector>
#include <memory.h>

using namespace std;

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

int N, M;
int map[10][10];
bool visited[10][10];
vector<pair<int, int>> way;

void dfs(int y, int x)
{
	if (map[y][x] == 1 || visited[y][x] == true) return;
	visited[y][x] = true;
	for (int i = 0; i < 4; ++i)
	{
		int new_y = y + dy[i];
		int new_x = x + dx[i];
		if (new_y < 0 || new_x < 0 || new_y >= N || new_x >= M) continue;
		dfs(new_y, new_x);
	}
}

int sovle()
{
	memset(visited, false, sizeof(visited));
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (map[i][j] == 2)
				dfs(i, j);
		}
	}
	int ret = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (false == visited[i][j] && map[i][j] == 0) ++ret;
		}
	}
	return ret;
}

int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> map[i][j];
			if (map[i][j] == 0) way.emplace_back(pair<int, int>(i, j));
		}
	}

	int ret = 0;
	for (int i = 0; i < way.size(); ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			for (int k = 0; k < j; ++k)
			{
				map[way[i].first][way[i].second] = map[way[j].first][way[j].second] = map[way[k].first][way[k].second] = 1;
				ret = max(ret, sovle());
				map[way[i].first][way[i].second] = map[way[j].first][way[j].second] = map[way[k].first][way[k].second] = 0;
			}
		}
	}
	cout << ret << endl;
}