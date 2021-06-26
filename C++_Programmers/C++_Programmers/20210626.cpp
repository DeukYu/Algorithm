/*
 < �� ���� ������ �� >

-- ���� ����
�� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.

-- ���� ����
a�� b�� ���� ���� �� �� �ƹ� ���� �����ϼ���.
a�� b�� -10,000,000 �̻� 10,000,000 ������ �����Դϴ�.
a�� b�� ��Ұ���� ���������� �ʽ��ϴ�.

-- ����� ��
a	b	return
3	5	12
3	3	3
5	3	12
*/

#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;

	if (a <= b)
	{
		for (int i = a; i <= b; ++i)
		{
			answer += i;
		}
	}
	else
	{
		for (int i = b; i <= a; ++i)
		{
			answer += i;
		}
	}
	return answer;
}

void main()
{
	solution(3, 5);
	solution(3, 3);
	solution(5, 3);
}