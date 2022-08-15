#include <iostream>
#include <vector>

using namespace std;

int root;
vector<int> adj[54];
int removeNode;
int dfs(int here) 
{
	int ret = 0;
	int child = 0;
	for (const auto& there : adj[here])
	{
		if (there == removeNode) continue;
		ret += dfs(there);
		child++;
	}
	if (child == 0) return 1;
	return ret;
}

int main() 
{
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int temp;
		cin >> temp;
		if (temp == -1) root = i;
		else adj[temp].push_back(i);
	}
	
	cin >> removeNode;
	if (removeNode == root)
	{
		cout << 0 << endl;
		return 0;
	}
	cout << dfs(root) << endl;
	return 0;
}