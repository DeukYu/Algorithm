/*
< 2021 īī�� ä�뿬���� ���Ͻ� - ���� ���ڿ��� ���ܾ� >

< ���� ���� >

�׿��� ���ε��� ���ڳ��̸� �ϰ� �ֽ��ϴ�. 
�׿��� ���ε����� ���ڸ� �ǳ� �� �Ϻ� �ڸ����� ���ܾ�� �ٲ� ī�带 �ǳ��ָ� ���ε��� ���� ���ڸ� ã�� �����Դϴ�.

������ ������ �Ϻ� �ڸ����� ���ܾ�� �ٲٴ� �����Դϴ�.

1478 �� "one4seveneight"
234567 �� "23four5six7"
10203 �� "1zerotwozero3"
�̷��� ������ �Ϻ� �ڸ����� ���ܾ�� �ٲ�����ų�, 
Ȥ�� �ٲ��� �ʰ� �״���� ���ڿ� s�� �Ű������� �־����ϴ�. 
s�� �ǹ��ϴ� ���� ���ڸ� return �ϵ��� solution �Լ��� �ϼ����ּ���.

����� �� ���ڿ� �����Ǵ� ���ܾ�� ���� ǥ�� �����ϴ�.

����		���ܾ�
0		zero
1		one
2		two
3		three
4		four
5		five
6		six
7		seven
8		eight
9		nine

< ���ѻ��� >
1 �� s�� ���� �� 50
s�� "zero" �Ǵ� "0"���� �����ϴ� ���� �־����� �ʽ��ϴ�.
return ���� 1 �̻� 2,000,000,000 ������ ������ �Ǵ� �ùٸ� �Է¸� s�� �־����ϴ�.

< ����� �� >
s					result
"one4seveneight"	1478
"23four5six7"		234567
"2three45sixseven"	234567
"123"				123

< ����� �� ���� >
����� �� #1

���� ���ÿ� �����ϴ�.
����� �� #2

���� ���ÿ� �����ϴ�.
����� �� #3

"three"�� 3, "six"�� 6, "seven"�� 7�� �����Ǳ� ������ ������ ����� �� #2�� ���� 234567�� �˴ϴ�.
����� �� #2�� #3�� ���� ���� ������ ����Ű�� ���ڿ��� ���� ������ ���� �� �ֽ��ϴ�.
����� �� #4

s���� ���ܾ�� �ٲ� �κ��� �����ϴ�.

< ���ѽð� �ȳ� >
��Ȯ�� �׽�Ʈ : 10��
*/
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
	string answer = "";
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (isdigit(s[i]))
			answer += s[i];
		else
		{
			if (s[i] == 'z')
			{
				answer += '0';
				i += 3;
			}
			else if (s[i] == 'o')
			{
				answer += '1';
				i += 2;
			}
			else if (s[i] == 't')
			{
				if (s.substr(i, 3) == "two")
				{
					answer += '2';
					i += 2;
				}
				else
				{
					answer += '3';
					i += 4;
				}
			}
			else if (s[i] == 'f')
			{
				if (s.substr(i, 4) == "four")
				{
					answer += '4';
				}
				else
					answer += '5';
				i += 3;
			}
			else if (s[i] == 's')
			{
				if (s.substr(i, 3) == "six")
				{
					answer += '6';
					i += 2;
				}
				else
				{
					answer += '7';
					i += 4;
				}
			}
			else if (s[i] == 'e')
			{
				answer += '8';
				i += 4;
			}
			else if (s[i] == 'n')
			{
				answer += '9';
				i += 3;
			}
		}
	}
	return stoi(answer);
}