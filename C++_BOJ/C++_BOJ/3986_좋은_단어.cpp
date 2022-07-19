#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int count = 0;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		string s;
		cin >> s;
		stack<char> stk;
		for (const auto& c : s)
		{
			if (stk.size() > 0 && stk.top() == c) stk.pop();
			else stk.push(c);
		}
		if (stk.empty()) ++count;
	}
	cout << count << endl;
}