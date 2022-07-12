/*
< ���� ��ȣ >

-- ���� ����
� ������ �� ���ĺ��� ������ �Ÿ���ŭ �о �ٸ� ���ĺ����� �ٲٴ� ��ȣȭ ����� ���� ��ȣ��� �մϴ�. 
���� ��� "AB"�� 1��ŭ �и� "BC"�� �ǰ�, 3��ŭ �и� "DE"�� �˴ϴ�. 
"z"�� 1��ŭ �и� "a"�� �˴ϴ�. 
���ڿ� s�� �Ÿ� n�� �Է¹޾� s�� n��ŭ �� ��ȣ���� ����� �Լ�, solution�� �ϼ��� ������.

-- ���� ����
������ �ƹ��� �о �����Դϴ�.
s�� ���ĺ� �ҹ���, �빮��, �������θ� �̷���� �ֽ��ϴ�.
s�� ���̴� 8000�����Դϴ�.
n�� 1 �̻�, 25������ �ڿ����Դϴ�.

-- ����� ��
s		n	result
"AB"	1	"BC"
"z"		1	"a"
"a B z"	4	"e F d"
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
	string answer;
	for (char iter : s)
	{
		char start = 0;
		if (iter == ' ')
		{
			answer.push_back(iter);
			continue;
		}
		if ('a' <= iter && iter <= 'z')
			start = 'a';
		else if ('A' <= iter && iter <= 'Z')
			start = 'A';
		iter = (iter + n - start) % 26 + start;
		answer.push_back(iter);
	}
	return answer;
}