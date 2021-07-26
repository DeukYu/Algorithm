/*
< ���￡�� �輭�� ã�� >

--���� ����
String�� �迭 seoul�� element�� "Kim"�� ��ġ x�� ã��, "�輭���� x�� �ִ�"�� String�� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���. 
seoul�� "Kim"�� ���� �� ���� ��Ÿ���� �߸��� ���� �ԷµǴ� ���� �����ϴ�.

-- ���� ����
seoul�� ���� 1 �̻�, 1000 ������ �迭�Դϴ�.
seoul�� ���Ҵ� ���� 1 �̻�, 20 ������ ���ڿ��Դϴ�.
"Kim"�� �ݵ�� seoul �ȿ� ���ԵǾ� �ֽ��ϴ�.

-- ����� ��
seoul			return
["Jane", "Kim"]	"�輭���� 1�� �ִ�"
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "";
	auto iter = find(seoul.begin(), seoul.end(), "Kim");
	if (iter != seoul.end())
		answer = "�輭���� " + to_string(iter - seoul.begin()) + "�� �ִ�";
	return answer;
}