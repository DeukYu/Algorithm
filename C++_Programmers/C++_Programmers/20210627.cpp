/*
 < ���ڿ� ������������ ��ġ�ϱ� >
 
 -- ���� ����
���ڿ� s�� ��Ÿ���� ���ڸ� ū�ͺ��� ���� ������ ������ ���ο� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
s�� ���� ��ҹ��ڷθ� �����Ǿ� ������, �빮�ڴ� �ҹ��ں��� ���� ������ �����մϴ�.

-- ���� ����
str�� ���� 1 �̻��� ���ڿ��Դϴ�.

-- ����� ��
s	return
"Zbcdefg"	"gfedcbZ"
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = s;
	sort(answer.begin(), answer.end(), greater<>());
	return answer;
}