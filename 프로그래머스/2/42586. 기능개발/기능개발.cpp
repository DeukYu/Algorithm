#include <string>
#include <stack>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;

	queue<int> q;
	for (int i = 0; i < progresses.size(); i++)
	{
		int remain = 100 - progresses[i];
		int day = remain / speeds[i];
		if (remain % speeds[i] != 0)
			day++;
		q.push(day);
	}

	while (!q.empty())
	{
		int cnt = 1;
		int top = q.front();
		q.pop();
		while (!q.empty() && top >= q.front())
		{
			cnt++;
			q.pop();
		}
		answer.push_back(cnt);
	}

	return answer;
}