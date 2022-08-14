#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isCheck(const string& str)
{
	stack<char> stk;
	
	for (const auto& ch : str)
	{
		if (ch == '(' || ch == '[') stk.push(ch);
		else if (ch == ')' || ch == ']')
		{
			if (stk.empty()) return false;
			if ((stk.top() == '(' && ch == ')') || (stk.top() == '[' && ch == ']')) stk.pop();
			else return false;
		}
	}

	return stk.empty();
}

int main()
{
	while (true)
	{
		string temp;
		getline(cin, temp);
		if (temp == ".") break;
		if (isCheck(temp)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}