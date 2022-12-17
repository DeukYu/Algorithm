// BOJ 2309¹ø ÀÏ°ö ³­ÀïÀÌ
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

void soultion(vector<int> values)
{
	sort(values.begin(), values.end());

	while (next_permutation(values.begin(), values.end()))
	{
		int sum = accumulate(values.begin(), values.begin() + 7, 0);
		if (sum == 100) break;
	}
	for (int i = 0; i < 7; ++i)
		cout << values[i] << endl;
}

int main() {
	vector<int> values;
	for (int i = 0; i < 9; ++i)
	{
		int temp;
		cin >> temp;
		values.emplace_back(temp);
	}
	soultion(values);
}