/*
< �������� ���� ���� >

-- ���� ����
������ ������ �������� �����濡 �����Ͽ����ϴ�. 
�� �� ���� ������ �����ϰ�� ��� ������ �������� �����Ͽ����ϴ�.

�����濡 ������ �������� �̸��� ��� �迭 participant�� ������ �������� �̸��� ��� �迭 completion�� �־��� ��, 
�������� ���� ������ �̸��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

-- ���ѻ���
������ ��⿡ ������ ������ ���� 1�� �̻� 100,000�� �����Դϴ�.
completion�� ���̴� participant�� ���̺��� 1 �۽��ϴ�.
�������� �̸��� 1�� �̻� 20�� ������ ���ĺ� �ҹ��ڷ� �̷���� �ֽ��ϴ�.
������ �߿��� ���������� ���� �� �ֽ��ϴ�.

-- ����� ��
participant											completion									return
["leo", "kiki", "eden"]								["eden", "kiki"]							"leo"
["marina", "josipa", "nikola", "vinko", "filipa"]	["josipa", "filipa", "marina", "nikola"]	"vinko"
["mislav", "stanko", "mislav", "ana"]				["stanko", "ana", "mislav"]					"mislav"

-- ����� �� ����
���� #1
"leo"�� ������ ��ܿ��� ������, ������ ��ܿ��� ���� ������ �������� ���߽��ϴ�.

���� #2
"vinko"�� ������ ��ܿ��� ������, ������ ��ܿ��� ���� ������ �������� ���߽��ϴ�.

���� #3
"mislav"�� ������ ��ܿ��� �� ���� ������, ������ ��ܿ��� �� ��ۿ� ���� ������ �Ѹ��� �������� ���߽��ϴ�.
*/
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	unordered_map<string, int>	empty;
	for (const auto& name : participant)
		empty[name]++;
	for (const auto& name : completion)
		empty[name]--;
	for (const auto& pair : empty)
	{
		if (pair.second > 0)
		{
			answer = pair.first;
			break;
		}
	}
	return answer;
}