#include <iostream>

using namespace std;

int main()
{
	int cnt[26]{};
	int N = 0;
	string ret = "";

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		string str = "";
		cin >> str;
		cnt[str[0] - 'a'] += 1;
	}

	for (int i = 0; i < 26; ++i)
	{
		if (cnt[i] >= 5) ret += i + 'a';
	}

	if (false == ret.empty())
		cout << ret << endl;
	else
		cout << "PREDAJA" << endl;
}