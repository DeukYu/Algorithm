// BOJ 10808번 알파벳 개수
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void soultion(string str)
{
	int a[26] = {};

	for (const auto& ch : str)
		++a[ch - 97];

	for (int i = 0; i < 26; ++i)
		cout << a[i] << " ";
}

int main()
{
	string str;
	cin >> str;
	soultion(str);
}