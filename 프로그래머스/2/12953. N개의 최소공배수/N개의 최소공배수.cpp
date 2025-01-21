#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr) {
	int answer = 0;

	answer = reduce(arr.begin(), arr.end(), 1, lcm<int, int>);
	return answer;
}