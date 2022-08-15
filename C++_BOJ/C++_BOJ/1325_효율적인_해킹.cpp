#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

vector<int> vec[10'001];
int visited[10'001];
int dp[10'001];
int maxValue;

int dfs(int here)
{
	visited[here] = 1;
	int ret = 1;
	for (int there : vec[here])
	{
		if (visited[there]) continue;
		ret += dfs(there);
	}
	return ret;
}

int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; ++i)
	{
		int a, b;
		cin >> a >> b;
		vec[b].emplace_back(a);
	}

	for (int i = 1; i <= N; ++i)
	{
		memset(visited, 0, sizeof(visited));
		dp[i] = dfs(i);
		maxValue = max(dp[i], maxValue);
	}

	for (int i = 1; i <= N; ++i)
	{
		if (dp[i] == maxValue)
			cout << i << " ";
	}
}