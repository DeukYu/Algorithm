/*
< �ڿ��� ������ �迭�� ����� >

-- ���� ����
�ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� �������ּ���. 
������� n�� 12345�̸� [5,4,3,2,1]�� �����մϴ�.

-- ���� ����
n�� 10,000,000,000������ �ڿ����Դϴ�.
-- ����� ��

n		return
12345	[5,4,3,2,1]
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
	string str = to_string(n);
	vector<int> answer(str.rbegin(), str.rend());
	for (auto& iter : answer)
		iter -= '0';
	return answer;
}