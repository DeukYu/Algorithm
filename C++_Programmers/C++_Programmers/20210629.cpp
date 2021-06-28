/*
< ���ڿ��� ������ �ٲٱ� >

-- ���� ����
���ڿ� s�� ���ڷ� ��ȯ�� ����� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.

-- ���� ����
s�� ���̴� 1 �̻� 5�����Դϴ�.
s�� �Ǿտ��� ��ȣ(+, -)�� �� �� �ֽ��ϴ�.
s�� ��ȣ�� ���ڷθ� �̷�����ֽ��ϴ�.
s�� "0"���� �������� �ʽ��ϴ�.

-- ����� ��
������� str�� "1234"�̸� 1234�� ��ȯ�ϰ�, "-1234"�̸� -1234�� ��ȯ�ϸ� �˴ϴ�.
str�� ��ȣ(+,-)�� ���ڷθ� �����Ǿ� �ְ�, �߸��� ���� �ԷµǴ� ���� �����ϴ�.
*/
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;
	size_t length = s.length();
	if (length < 1 || length > 5)
		answer = 0;
	stringstream ss(s);
	ss >> answer;
	return answer;
}