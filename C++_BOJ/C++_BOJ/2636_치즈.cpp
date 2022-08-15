#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };
int N, M;
int map[100][100];
int visited[100][100];
vector<pair<int, int>> vec;
int allTimeCnt;
int breforeTimeCnt;

void bfs(int y, int x) {
	visited[y][x] = 1;
	if (map[y][x] == 1) {
		vec.push_back({ y, x });
		return;
	}
	for (int i = 0; i < 4; ++i)
	{
		int new_y = y + dy[i];
		int new_x = x + dx[i];
		if (new_y < 0 || new_x < 0 || new_y >= N || new_x >= M || 1 == visited[new_y][new_x]) continue;
		bfs(new_y, new_x);
	}
	return;
}

int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> map[i][j];
		}
	}

	while (true)
	{
		breforeTimeCnt = 0;
		memset(visited, 0, sizeof(visited));
		vec.clear();

		bfs(0, 0);
		for (const auto& iter : vec)
		{
			++breforeTimeCnt;
			map[iter.first][iter.second] = 0;
		}

		++allTimeCnt;
		bool flag = false;
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				if (map[i][j] != 0) flag = true;
			}
		}
		if (false == flag) break;
	}
	cout << allTimeCnt << endl;
	cout << breforeTimeCnt << endl;
}