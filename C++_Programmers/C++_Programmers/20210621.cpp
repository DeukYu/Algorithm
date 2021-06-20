/*
<3���� ������>
���� ����
�ڿ��� n�� �Ű������� �־����ϴ�. n�� 3���� �󿡼� �յڷ� ������ ��, �̸� �ٽ� 10�������� ǥ���� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.

���ѻ���
n�� 1 �̻� 100,000,000 ������ �ڿ����Դϴ�.
����� ��
n	result
45	7
125	229
����� �� ����
����� �� #1

���� �����ϴ� ������ ������ �����ϴ�.
n (10����)	n (3����)	�յ� ����(3����)	10�������� ǥ��
45	1200	0021	7
���� 7�� return �ؾ� �մϴ�.
����� �� #2

���� �����ϴ� ������ ������ �����ϴ�.
n (10����)	n (3����)	�յ� ����(3����)	10�������� ǥ��
125	11122	22111	229
���� 229�� return �ؾ� �մϴ�.
*/
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
	if (n < 1 || 100'000'000 < n)
		return 0;

	int answer = 0;
	vector<int> v;

	while (n)
	{
		v.emplace_back(n % 3);
		n /= 3;
	}
	
	reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); ++i)
	{
		answer += pow(3, i) * v[i];
	}

	return answer;
}