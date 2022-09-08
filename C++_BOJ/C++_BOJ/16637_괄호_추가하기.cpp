/*
https://www.acmicpc.net/problem/16637
*/

#include <iostream>
#include <stack>

using namespace std;

int N;
string str;

int oper(char a, int b, int c)
{
	if (a == '+') return b + c;
	if (a == '-') return b - c;
	if (a == '*') return b * c;
}

int solution(string s)
{
	stack<char> temp;
	int result = 0;
	for (const auto& ch : s)
	{
		if (temp.empty() && isdigit(ch)) temp.push(ch);

	}

	return result;
}

int main()
{
	cin >> N;
	cin >> str;
	cout << solution(str) << endl;
}