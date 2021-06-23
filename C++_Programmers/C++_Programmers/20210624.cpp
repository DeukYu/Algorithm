/*
 <2016��>

���� ����
2016�� 1�� 1���� �ݿ����Դϴ�. 2016�� a�� b���� ���� �����ϱ��? 
�� �� a ,b�� �Է¹޾� 2016�� a�� b���� ���� �������� �����ϴ� �Լ�, solution�� �ϼ��ϼ���. 
������ �̸��� �Ͽ��Ϻ��� ����ϱ��� ���� SUN,MON,TUE,WED,THU,FRI,SAT�Դϴ�. 
���� ��� a=5, b=24��� 5�� 24���� ȭ�����̹Ƿ� ���ڿ� "TUE"�� ��ȯ�ϼ���.

���� ����
2016���� �����Դϴ�.
2016�� a�� b���� ������ �ִ� ���Դϴ�. (13�� 26���̳� 2�� 45�ϰ��� ��¥�� �־����� �ʽ��ϴ�)

����� ��
a	b	result
5	24	"TUE"
*/

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string str_day[] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
	int month_day[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int total_day = 0;

	// ��
	for (int i = 0; i < a - 1; ++i)
	{
		total_day += month_day[i];
	}

	// ��
	total_day += b - 1;

	//
	int answer_day = (5 + total_day) % 7;

	string answer = str_day[answer_day];
	return answer;
}