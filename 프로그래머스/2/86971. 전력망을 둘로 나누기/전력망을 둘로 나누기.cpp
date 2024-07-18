#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int n, vector<vector<int>> wires) {
	int answer = -1;

	vector<vector<int>> graph(n, vector<int>(n, 0));
	for(int i = 0; i < wires.size(); i++)
	{
		int a = wires[i][0] - 1;
		int b = wires[i][1] - 1;
		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	for(const auto& wire : wires)
	{
		int a = wire[0] - 1;
		int b = wire[1] - 1;
		graph[a][b] = 0;
		graph[b][a] = 0;

		vector<int> visited(n, 0);
		vector<int> stack;
		stack.push_back(0);
		visited[0] = 1;
		while(!stack.empty())
		{
			int node = stack.back();
			stack.pop_back();
			for(int i = 0; i < n; i++)
			{
				if(graph[node][i] == 1 && visited[i] == 0)
				{
					stack.push_back(i);
					visited[i] = 1;
				}
			}
		}

		int cnt = accumulate(visited.begin(), visited.end(), 0);

		if(answer == -1)
			answer = abs(n - cnt - cnt);
		else
			answer = min(answer, abs(n - cnt - cnt));

		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	return answer;
}