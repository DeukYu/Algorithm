#include <iostream>
#include <stack>

using namespace std;



bool isCheck(const string& s)
{
	stack<char> stk;

	for (const auto& ch : s)
	{
		if (ch == '(')	stk.push(ch);
		else
		{
			if (false == stk.empty()) stk.pop();
			else return false;
		}
	}
	return stk.empty();
}

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		string temp;
		cin >> temp;

		if (isCheck(temp))
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}