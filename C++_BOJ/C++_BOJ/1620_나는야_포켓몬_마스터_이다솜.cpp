#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int N, M;
string s;
map<int, string> poketmon1;
map<string, int> poketmon2;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		cin >> s;
		poketmon1[i + 1] = s;
		poketmon2[s] = i + 1;
	}
	for (int i = 0; i < M; ++i)
	{
		cin >> s;
		if (atoi(s.c_str()) == 0)
			cout << poketmon2[s] << "\n";
		else
			cout << poketmon1[atoi(s.c_str())] << "\n";
	}
}