#include <iostream>
#include <string>
#include <tuple>
#include <set>

using namespace std;

const int MAX = 5;
const int MIN = -5;


int solution(string dirs) {
	int answer = 0;

	tuple<int, int> curPos = make_tuple(0, 0);
	set<pair<tuple<int, int>, tuple<int, int>>> visitedEdges;
	bool visited[10][10] = { false, };
	for (auto dir : dirs)
	{
		tuple<int, int> prevPos = curPos;

		switch (dir)
		{
		case 'U':
			if (get<1>(curPos) < MAX)
				get<1>(curPos)++;
			else
				continue;
			break;
		case 'D':
			if (get<1>(curPos) > MIN)
				get<1>(curPos)--;
			else
				continue;
			break;
		case 'L':
			if (get<0>(curPos) > MIN)
				get<0>(curPos)--;
			else
				continue;
			break;
		case 'R':
			if (get<0>(curPos) < MAX)
				get<0>(curPos)++;
			else
				continue;
			break;
		}

		auto edge1 = make_pair(prevPos, curPos);
		auto edge2 = make_pair(curPos, prevPos);

		if(visitedEdges.find(edge1) == visitedEdges.end() && visitedEdges.find(edge2) == visitedEdges.end())
		{
			visitedEdges.insert(edge1);
			visitedEdges.insert(edge2);
			answer++;
		}
	}

	return answer;
}