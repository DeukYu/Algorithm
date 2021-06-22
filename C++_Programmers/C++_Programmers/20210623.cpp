/*
<�� �� �̾Ƽ� ���ϱ�>

���� ����
���� �迭 numbers�� �־����ϴ�. numbers���� ���� �ٸ� �ε����� �ִ� �� ���� ���� �̾� ���ؼ� ���� �� �ִ� ��� ���� �迭�� ������������ ��� return �ϵ��� solution �Լ��� �ϼ����ּ���.

���ѻ���
numbers�� ���̴� 2 �̻� 100 �����Դϴ�.
numbers�� ��� ���� 0 �̻� 100 �����Դϴ�.
����� ��
numbers	result
[2,1,3,4,1]	[2,3,4,5,6,7]
[5,0,2,7]	[2,5,7,9,12]
����� �� ����
����� �� #1

2 = 1 + 1 �Դϴ�. (1�� numbers�� �� �� �ֽ��ϴ�.)
3 = 2 + 1 �Դϴ�.
4 = 1 + 3 �Դϴ�.
5 = 1 + 4 = 2 + 3 �Դϴ�.
6 = 2 + 4 �Դϴ�.
7 = 3 + 4 �Դϴ�.
���� [2,3,4,5,6,7] �� return �ؾ� �մϴ�.
����� �� #2

2 = 0 + 2 �Դϴ�.
5 = 5 + 0 �Դϴ�.
7 = 0 + 7 = 5 + 2 �Դϴ�.
9 = 2 + 7 �Դϴ�.
12 = 5 + 7 �Դϴ�.
���� [2,5,7,9,12] �� return �ؾ� �մϴ�.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	answer.clear();

	if (numbers.size() < 2 || numbers.size() > 100)
		return answer;

	for (int i = 1; i < numbers.size(); ++i)
	{
		if (numbers[i] < 0 || numbers[i] > 100)
		{
			answer.clear();
			return answer;
		}

		for (int j = 0; j < i; ++j)
		{
			if (numbers[j] < 0 || numbers[j] > 100)
			{
				answer.clear();
				return answer;
			}
			answer.emplace_back(numbers[i] + numbers[j]);
		}
	}

	sort(answer.begin(), answer.end());
	answer.erase(unique(answer.begin(), answer.end()), answer.end());
	
	return answer;
}