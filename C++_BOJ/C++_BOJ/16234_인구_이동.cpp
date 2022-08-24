#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

const int dy[] = { -1, 1, 0, 0 };
const int dx[] = { 0, 0, -1, 1 };

int N, L, R, sum;
int map[51][51];
bool visited[51][51];
void dfs(int y, int x, vector<pair<int, int>>& vecTemp)
{
	for (int i = 0; i < 4; ++i)
	{
		int ny = dy[i] + y;
		int nx = dx[i] + x;

		if (ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
		if (visited[ny][nx] == true) continue;
		int value = abs(map[y][x] - map[ny][nx]);
		if (value < L || value > R) continue;
		visited[ny][nx] = true;
		vecTemp.push_back({ ny, nx });
		sum += map[ny][nx];
		dfs(ny, nx, vecTemp);
	}
}

int main()
{
	cin >> N >> L >> R;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> map[i][j];
		}
	}
	vector<pair<int, int>> v;
	int result = 0;
	while (true)
	{
		bool flag = false;
		memset(visited, 0, sizeof(visited));
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (visited[i][j]) continue;
				v.clear();
				visited[i][j] = true;
				v.push_back({ i, j });
				sum = map[i][j];
				dfs(i, j, v);
				if (v.size() == 1) continue;
				for (auto iter : v)
				{
					map[iter.first][iter.second] = sum / v.size();
					flag = true;
				}
			}
		}
		if (false == flag) break;
		++result;
	}
	cout << result << endl;
	return 0;
}