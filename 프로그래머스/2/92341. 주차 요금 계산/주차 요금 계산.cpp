#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <stack>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
	vector<int> answer;
	map<int, int> carTime;
	map<int, stack<int>> carStack;
	for (string record : records) {
		stringstream ss(record);
		int hour, minute, carNum;
		string io;
		char colon;
		ss >> hour >> colon >> minute >> carNum >> io;
		
		int total_time = hour * 60 + minute;
		if (io == "IN") {
			carStack[carNum].push(total_time);
		}
		else {
			int inTime = carStack[carNum].top();
			carStack[carNum].pop();
			carTime[carNum] += total_time - inTime;
		}
	}

	for (auto iter : carStack)
	{
		if (iter.second.empty() == false)
			carTime[iter.first] += 1439 - iter.second.top();
	}

	for (auto iter : carTime)
	{
		if(iter.second <= fees[0])
			answer.push_back(fees[1]);
		else
			answer.push_back(fees[1] + (iter.second - fees[0] - 1) / fees[2] * fees[3] + fees[3]);
	}
	return answer;
}