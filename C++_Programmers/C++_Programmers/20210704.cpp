/*
< �̻��� ���� ����� >

-- ���� ����
	���ڿ� s�� �� �� �̻��� �ܾ�� �����Ǿ� �ֽ��ϴ�. �� �ܾ�� �ϳ� �̻��� ���鹮�ڷ� ���еǾ� �ֽ��ϴ�. 
	�� �ܾ��� ¦����° ���ĺ��� �빮�ڷ�, Ȧ����° ���ĺ��� �ҹ��ڷ� �ٲ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.

-- ���� ����
	���ڿ� ��ü�� ¦/Ȧ�� �ε����� �ƴ϶�, �ܾ�(������ ����)���� ¦/Ȧ�� �ε����� �Ǵ��ؾ��մϴ�.
	ù ��° ���ڴ� 0��° �ε����� ���� ¦����° ���ĺ����� ó���ؾ� �մϴ�.

--����� ��
	s	return
"try hello world"	"TrY HeLlO WoRlD"

--����� �� ����
"try hello world"�� �� �ܾ� "try", "hello", "world"�� �����Ǿ� �ֽ��ϴ�. 
�� �ܾ��� ¦����° ���ڸ� �빮�ڷ�, Ȧ����° ���ڸ� �ҹ��ڷ� �ٲٸ� "TrY", "HeLlO", "WoRlD"�Դϴ�. 
���� "TrY HeLlO WoRlD" �� �����մϴ�.
*/
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = s;
	int idx = 0;
	for (int i = 0; i < answer.length(); ++i)
	{
		if (answer[i] == ' ') {
			idx = 0;
			continue;
		}
		if ((idx & 1) == 0) answer[i] = toupper(answer[i]);
		else answer[i] = tolower(answer[i]);
		++idx;
	}
	return answer;
}