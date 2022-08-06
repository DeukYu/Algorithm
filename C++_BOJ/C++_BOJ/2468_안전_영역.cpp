#include <iostream>
#include <string.h>

using namespace std;

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };
int N;
int map[100][100];
int safe[100][100];
int visited[100][100];
int maxValue = 0;

void dfs(int y, int x) 
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; ++i)
	{
		int new_y = y + dy[i];
		int new_x = x + dx[i];

		if (new_y < 0 || new_x < 0 || new_y >= N || new_x >= N) continue;
		if (safe[new_y][new_x] == 0) continue;
		if (visited[new_y][new_x] == 0) {
			dfs(new_y, new_x);
		}
	}
	return;
}
int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> map[i][j];
			
			if (maxValue < map[i][j])	maxValue = map[i][j];
		}
	}

	int maxArea = 0;
	for (int m = 0; m < maxValue; ++m)
	{
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (map[i][j] > m)
				{
					safe[i][j] = 1;
				}
			}
		}

		int temp = 0;
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (safe[i][j] == 1 && visited[i][j] == 0)
				{
					dfs(i, j);
					++temp;
				}
			}
		}
		if (maxArea < temp)
			maxArea = temp;
		memset(visited, 0, sizeof(visited));
		memset(safe, 0, sizeof(safe));
	}
	cout << maxArea << endl;
	return 0;
}