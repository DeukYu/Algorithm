/*
< ��� ���ϱ� >

-- ���� ����
������ ��� �ִ� �迭 arr�� ��հ��� return�ϴ� �Լ�, solution�� �ϼ��غ�����.

-- ���ѻ���
arr�� ���� 1 �̻�, 100 ������ �迭�Դϴ�.
arr�� ���Ҵ� -10,000 �̻� 10,000 ������ �����Դϴ�.

-- ����� ��
arr			return
[1,2,3,4]	2.5
[5,5]		5
*/
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
	double answer = 0;
	for (int num : arr)
		answer += num;
	return (answer / arr.size());
}