/*
< �ִ������� �ּҰ���� >

-- ���� ����
�� ���� �Է¹޾� �� ���� �ִ������� �ּҰ������ ��ȯ�ϴ� �Լ�, solution�� �ϼ��� ������. 
�迭�� �� �տ� �ִ�����, �״��� �ּҰ������ �־� ��ȯ�ϸ� �˴ϴ�. 
���� ��� �� �� 3, 12�� �ִ������� 3, �ּҰ������ 12�̹Ƿ� solution(3, 12)�� [3, 12]�� ��ȯ�ؾ� �մϴ�.

-- ���� ����
�� ���� 1�̻� 1000000������ �ڿ����Դϴ�.

����� ��
n	m	return
3	12	[3, 12]
2	5	[1, 10]

-- ����� �� ����
����� �� #1
���� ����� �����ϴ�.

����� �� #2
�ڿ��� 2�� 5�� �ִ������� 1, �ּҰ������ 10�̹Ƿ� [1, 10]�� �����ؾ� �մϴ�.
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;
	int range = min(n, m);

	for (int i = range; i >= 1; --i)
	{
		if (n % i == 0 && m % i == 0)
		{
			answer.emplace_back(i);
			answer.emplace_back(((n*m) / i));
			break;
		}
	}
	return answer;
}