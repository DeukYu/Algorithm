#include <iostream>
#include<vector>
#include <queue>

using namespace std;

int solution(vector<vector<int> > maps)
{
	int answer = 0;

	int N = maps.size();
	int M = maps[0].size();

	vector<vector<int>> visited(N, vector<int>(M, -1));
	vector<vector<int>> dir = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
	queue<pair<int, int>> q;
	q.push({ 0, 0 });
	visited[0][0] = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int dx = x + dir[i][0];
			int dy = y + dir[i][1];

			if (dx >= 0 && dx < N && dy >= 0 && dy < M)
			{
				if (visited[dx][dy] == -1 && maps[dx][dy] != 0)
				{
					visited[dx][dy] = visited[x][y] + 1;
					q.push({ dx, dy });
				}
			}
		}
	}

	answer = visited[N - 1][M - 1];

	return answer;
}
