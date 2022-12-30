#include <iostream>
#include <vector>
#include <map>
#include <array>
using namespace std;

void soultion(vector<string> players)
{
	array<int, 26> cnt{};
	string ret = "";
	for (const auto& player : players)
	{
		cnt[player[0] - 'a'] += 1;
	}
	for (int i = 0; i < cnt.size(); ++i)
	{
		if (cnt[i] >= 5) ret += i + 'a';
	}

	if (false == ret.empty())
		cout << ret << endl;
	else
		cout << "PREDAJA" << endl;
}
int main()
{
	vector<string> players;
	int num;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		string temp;
		cin >> temp;
		players.emplace_back(temp);
	}
	soultion(players);
}