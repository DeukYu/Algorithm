#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };
int M, N, K;
int map[100][100];
int visited[100][100];

int dfs(const int& y, const int& x)
{
	visited[y][x] = 1;
	int _ret = 1;

	for (int i = 0; i < 4; ++i)
	{
		int new_y = y + dy[i];
		int new_x = x + dx[i];

		if (new_y < 0 || new_x < 0 || new_y >= M || new_x >= N) continue;
		if (map[new_y][new_x] == 1) continue;
		if (visited[new_y][new_x] == 1) continue;
		_ret += dfs(new_y, new_x);
	}
	return _ret;
}

int main()
{
	vector<int> ret;

	cin >> M >> N >> K;

	while (K--)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; ++i)
		{
			for (int j = x1; j < x2; ++j)
			{
				map[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (map[i][j] == 1) continue;
			if (visited[i][j] == 1) continue;
			ret.emplace_back(dfs(i, j));
		}
	}

	sort(ret.begin(), ret.end());
	cout << ret.size() << endl;
	for (const auto& iter : ret)
	{
		cout << iter << " ";
	}
}