#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int N, C;
int number;
std::unordered_map<int, int> m, order;

bool pred(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) return order[a.first] < order[b.first];
	else return a.second > b.second;
}

int main()
{
	cin >> N >> C;
	for (int i = 0; i < N; ++i)
	{
		int temp;
		cin >> temp;
		if (m.find(temp) == m.end())
		{
			++number;
			order[temp] = number;
		}
		m[temp] += 1;
	}
	vector<pair<int, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), pred);
	for (const auto& iter : v) {
		for (int i = 0; i < iter.second; ++i)
		{
			cout << iter.first << " ";
		}
	}
	return 0;
}