/*
<����� ������ ����>

���� ����
�� ���� left�� right�� �Ű������� �־����ϴ�. left���� right������ ��� ���� �߿���, ����� ������ ¦���� ���� ���ϰ�, ����� ������ Ȧ���� ���� �� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.

���ѻ���
1 �� left �� right �� 1,000
����� ��
left	right	result
13	17	43
24	27	52
����� �� ����
����� �� #1

���� ǥ�� 13���� 17������ ������ ����� ��� ��Ÿ�� ���Դϴ�.
��	���	����� ����
13	1, 13	2
14	1, 2, 7, 14	4
15	1, 3, 5, 15	4
16	1, 2, 4, 8, 16	5
17	1, 17	2
����, 13 + 14 + 15 - 16 + 17 = 43�� return �ؾ� �մϴ�.
����� �� #2

���� ǥ�� 24���� 27������ ������ ����� ��� ��Ÿ�� ���Դϴ�.
��	���	����� ����
24	1, 2, 3, 4, 6, 8, 12, 24	8
25	1, 5, 25	3
26	1, 2, 13, 26	4
27	1, 3, 9, 27	4
����, 24 - 25 + 26 + 27 = 52�� return �ؾ� �մϴ�.
*/

#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
	int answer = 0;

	if (1 <= left && left <= right && right <= 1000)
	{
		for (int i = left; i <= right; ++i)
		{
			vector<int>	v;
			for (int j = 1; j <= i; ++j)
			{
				if (i % j == 0)
				{
					v.emplace_back(j);

					if (i == j)
					{
						if (v.size() % 2 == 0)
						{
							answer += j;
						}
						else if(v.size() % 2 == 1)
						{
							answer -= j;
						}
						v.clear();
					}
				}
			}
		}
	}
	return answer;
}