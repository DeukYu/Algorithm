#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> order) {
    int answer = 0;

    stack<int> s;

	int i = 0;

	for(int box = 1 ; box <= order.size() ; box++)
	{
		if(order[i] != box)
		{
			s.push(box);
			continue;
		}
		++i;
		++answer;
		while(!s.empty() && s.top() == order[i])
		{
			s.pop();
			answer++;
			i++;
		}
	}

	return answer;
}