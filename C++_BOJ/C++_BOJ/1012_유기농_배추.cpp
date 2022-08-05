#include <iostream>
#include <string.h>

using namespace std;

const int MAX = 50;

int T;
int M, N, K;
int map[MAX][MAX];
int visited[MAX][MAX];
int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; ++i)
	{
		int new_y = y + dy[i];
		int new_x = x + dx[i];
		if (new_y < 0 || new_x < 0 || new_y >= N || new_x >= M) continue;
		if (visited[new_y][new_x] == 1) continue;
		if (map[new_y][new_x] == 1) {
			dfs(new_y, new_x);
		}
	}
	return;
}
int main() {
	cin >> T;
	while (T--) 
	{
		int ret = 0;
		cin >> M >> N >> K;
		for (int i = 0; i < K; ++i)
		{
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j) {
				if (map[i][j] == 1 && visited[i][j] == 0)
				{
					dfs(i, j);
					++ret;
				}
			}
		}
		cout << ret << endl;
		memset(map, 0, sizeof(map));
		memset(visited, 0, sizeof(visited));
	}
	return 0;
}