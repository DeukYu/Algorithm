#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

bool compare(string a, string b)
{
	return a + b > b + a;
}

string solution(vector<int> numbers) {
	vector<string> strNumbers;
	transform(numbers.begin(), numbers.end(), back_inserter(strNumbers), [](int num) { return to_string(num); });

	sort(strNumbers.begin(), strNumbers.end(), compare);

	if (strNumbers[0] == "0")
		return "0";

	return accumulate(strNumbers.begin(), strNumbers.end(), string{});
}