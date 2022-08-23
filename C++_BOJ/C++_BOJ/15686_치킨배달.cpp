#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int N, M;
int map[51][51];
vector<pair<int, int>> houses, chickens;
vector<vector<pair<int, int>>> pick;

int Distance(pair<int, int> a, pair<int, int> b)
{
	return abs(a.first - b.first) + abs(a.second - b.second);
}

void Combination(int start, vector<pair<int,int>>& _pick)
{
	if (_pick.size() == M)
	{
		pick.push_back({ _pick });
		return;
	}

	for (int i = start + 1; i < chickens.size(); ++i)
	{
		_pick.push_back({ chickens[i] });
		Combination(i, _pick);
		_pick.pop_back();
	}
}

int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> map[i][j];
			if (map[i][j] == 1) houses.push_back({ i, j });
			else if (map[i][j] == 2) chickens.push_back({ i, j });
		}
	}

	vector<pair<int, int>> p;
	int result = INT_MAX;
	Combination(-1, p);
	for (const auto& pic : pick)
	{
		int ret = 0;
		for (const auto& house : houses)
		{
			int _min = INT_MAX;
			for (const auto& ch : pic)
			{
				_min = min(_min, Distance(house, ch));
			}
			ret += _min;
		}
		result = min(result, ret);
	}

	cout << result << endl;
	
	return 0;
}