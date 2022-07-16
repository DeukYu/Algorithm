#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k, sum[100'001], ret = -1'000'000;
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		int temp = 0;
		cin >> temp;
		sum[i] = sum[i - 1] + temp;
	}
	for (int i = k; i <= n; ++i)
	{
		ret = max(ret, sum[i] - sum[i - k]);
	}
	cout << ret << endl;
	return 0;
}