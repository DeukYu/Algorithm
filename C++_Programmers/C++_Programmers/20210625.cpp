/*
< ��� ���� �������� >

���� ����
�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������. �ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

���ѻ���
s�� ���̰� 1 �̻�, 100������ ��Ʈ���Դϴ�.
����� ��
s	return
"abcde"	"c"
"qwer"	"we"
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	unsigned int between = (s.length() / 2);
	string answer = "";
	if (s.length() % 2 == 0)
	{
		answer.append(s.substr(between - 1, 2));
	}
	else
	{
		answer.append(s.substr(between, 1));
	}
	return answer;
}

void main()
{
	solution("abcde");
}
