#include <iostream>

using namespace std;

int T;
int temp;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> temp;
		int ret2 = 0; int ret5 = 0;
		for (int j = 2; j <= temp; j *= 2)
		{
			ret2 += temp / j;
		}
		for (int j = 5; j <= temp; j *= 5)
		{
			ret5 += temp / j;
		}
		cout << min(ret2, ret5) << "\n";
	}
	return 0;
}