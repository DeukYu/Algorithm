#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

const int MAX = 104;
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int N, M;
int maze[MAX][MAX];
int visited[MAX][MAX];

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		string row;
		cin >> row;
		for (int j = 0; j < M; ++j) 
		{
			maze[i][j] = row[j] - '0';
		}
	}

	int start_x = 0;
	int start_y = 0;

	visited[start_y][start_x] = 1;
	queue<pair<int, int>> q;
	q.push({ start_y, start_x });

	while (!q.empty()) {
		int x, y;
		tie(y, x) = q.front(); 
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			int new_y = y + dy[i];
			int new_x = x + dx[i];

			if (new_y < 0 || new_y >= N || new_x < 0 || new_x >= M)
				continue;
			if (0 == maze[new_y][new_x])
				continue;
			if (visited[new_y][new_x])
				continue;
			visited[new_y][new_x] = visited[y][x] + 1;
			q.push({ new_y, new_x });
		}
	}
	cout << visited[N - 1][M - 1];
	return 0;
}