#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
	unordered_map<int, int> toppingCount;
	unordered_set<int> toppings_left;

	for(int t: topping)
		toppingCount[t]++;

	for (int t : topping)
	{
		toppings_left.insert(t);
		toppingCount[t]--;
		if (toppingCount[t] == 0)
			toppingCount.erase(t);
		if (toppings_left.size() == toppingCount.size())
		{
			answer++;
		}
	}
	return answer;
}