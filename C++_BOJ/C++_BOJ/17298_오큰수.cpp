#include <iostream>
#include <stack>
#include <memory.h>
using namespace std;

int a[1'000'000];
int ret[1'000'000];
stack<int> stk;
int main()
{
	int N;
	cin >> N;
	memset(ret, -1, sizeof(ret));
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
		while (stk.size() && a[stk.top()] < a[i]) {
			ret[stk.top()] = a[i]; stk.pop();
		}
		stk.push(i);
	}	

	for (int i = 0; i < N; ++i)
		cout << ret[i] << " ";

	return 0;
}