#include <iostream>

using namespace std;

int main()
{
	int N;
	while (cin >> N) {
		int ans = 1;
		int count = 1;
		while (true)
		{
			if (ans % N == 0)
				break;
			else {
				++count;
				ans = (ans * 10) + 1;
				ans %= N;
			}
		}
		cout << count << endl;
	}
}