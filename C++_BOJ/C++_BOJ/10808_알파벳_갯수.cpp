#include <iostream>
#include <map>

using namespace std;

int main() {
	string input;
	cin >> input;

	int a[26]{};
	for (const auto& iter : input)
	{
		a[iter - 'a'] += 1;
	}

	for (const auto& iter : a)
	{
		cout << iter << " ";
	}
}