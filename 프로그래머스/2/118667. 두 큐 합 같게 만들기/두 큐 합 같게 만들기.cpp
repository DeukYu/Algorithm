#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
	int answer = 0;

	long long sum1 = accumulate(queue1.begin(), queue1.end(), 0LL);
	long long sum2 = accumulate(queue2.begin(), queue2.end(), 0LL);
	long long totalSum = sum1 + sum2;
	if (totalSum % 2 != 0)
		return -1;

	long long targetSum = totalSum / 2;

	queue<int> q1;
	queue<int> q2;

	for (int val : queue1) q1.push(val);
	for (int val : queue2) q2.push(val);

	long long max_operations = (queue1.size() + queue2.size()) * 2;

	while (answer < max_operations)
	{
		if (sum1 > sum2) {
			int val = q1.front();
			q1.pop();
			q2.push(val);
			sum1 -= val;
			sum2 += val;
		}
		else if (sum1 < sum2) {
			int val = q2.front();
			q2.pop();
			q1.push(val);
			sum1 += val;
			sum2 -= val;
		}
		else
			break;
		++answer;
	}

	return sum1 == sum2 ? answer : -1;
}