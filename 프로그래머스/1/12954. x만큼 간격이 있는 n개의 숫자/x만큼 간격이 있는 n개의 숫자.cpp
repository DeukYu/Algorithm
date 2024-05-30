#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
	vector<long long> v(n, x);

	for(int i = 1; i < n; i++) {
		v[i] = v[i - 1] + x;
	}
	return v;
}