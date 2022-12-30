// BOJ 2979번 트럭 주차
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;

void soultion(int carNum)
{
	array<int, 100> cnt{};
	int A, B, C;
	int result = 0;
	cin >> A >> B >> C;
	for (int i = 0; i < carNum; ++i)
	{
		int arrival, leave;
		cin >> arrival >> leave;
		for_each(cnt.begin() + arrival, cnt.begin() + leave, [](auto& num) {++num; });
	}
	for (const int& num : cnt)
	{
		if (num > 0)
		{
			if (num == 1) result += A;
			else if (num == 2) result += B * 2;
			else if (num == 3) result += C * 3;
		}
	}
	cout << result << endl;
}

int main()
{
	soultion(3);
}