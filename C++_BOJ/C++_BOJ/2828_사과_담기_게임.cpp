#include <iostream>

using namespace std;

int N, M, J;
int main()
{
	cin >> N >> M;

	cin >> J;
	int start = 1;
	int ret = 0;
	for (int i = 0; i < J; ++i)
	{
		int end = start + M - 1;
		int temp;
		cin >> temp;
		if (temp >= start && temp <= end) continue;
		else
		{
			if (temp < start) {
				ret += (start - temp);
				start = temp;
			}
			else {
				start += (temp - end);
				ret += (temp - end);
			}
		}
	}
	cout << ret << endl;
	return 0;
}