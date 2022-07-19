#include <iostream>

using namespace std;

int a[15001];
int main()
{
	int n, m;
	int count = 0;
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] + a[j] == m) ++count;
		}
	}
	cout << count << endl;
}