// BOJ 2979번 트럭 주차
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void soultion(string str)
{
}

int main()
{
	int cnt[100]{};	// 카운트를 위한 배열
	int result = 0;	// 결과값
	int A, B, C;	// 각 주차 대당 값
	cin >> A >> B >> C;
	for (int i = 0; i < 3; ++i)
	{
		int a, b;
		cin >> a >> b;
		for (int j = a; j < b; ++j)
			cnt[j] += 1;
	}
	for (int i = 0; i < 100; ++i)
	{
		if (cnt[i] > 0)
		{
			if (cnt[i] == 1) result += A;
			else if (cnt[i] == 2) result += B * 2;
			else if (cnt[i] == 3) result += C * 3;
		}
	}

	cout << result << endl;
	return 0;
}