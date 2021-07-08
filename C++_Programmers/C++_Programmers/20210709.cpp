/*
< ���� ������������ ��ġ�ϱ� >
-- ���� ����
�Լ� solution�� ���� n�� �Ű������� �Է¹޽��ϴ�. 
n�� �� �ڸ����� ū�ͺ��� ���� ������ ������ ���ο� ������ �������ּ���. 
������� n�� 118372�� 873211�� �����ϸ� �˴ϴ�.

-- ���� ����
n�� 1�̻� 8000000000 ������ �ڿ����Դϴ�.

-- ����� ��
	n	return
118372	873211
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
	stringstream ss;
	ss << n;
	vector<char>	nums;
	for (const auto& num : ss.str())
		nums.emplace_back((num));
	sort(nums.begin(), nums.end(), greater<int>());
	ss.str("");
	for (const auto& num : nums)
		ss << num;
	long long answer = 0;
	ss >> answer;
	return answer;
}