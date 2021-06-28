/*
< ���ڿ� �ٷ�� �⺻ >

-- ���� ����
���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���. ���� ��� s�� "a234"�̸� False�� �����ϰ� "1234"��� True�� �����ϸ� �˴ϴ�.

-- ���� ����
s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.

-- ����� ��
  s	   return
"a234"	false
"1234"	true
*/

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	const size_t length = s.length();

	if (4 != length && 6 != length) // 1. ���� üũ
		return false;

	for (size_t i = 0; i < length; ++i)
	{
		if (!isdigit(s[i]))
			return false;
	}
	return true;
}