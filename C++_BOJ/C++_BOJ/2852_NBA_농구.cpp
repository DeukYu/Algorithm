#include <iostream>

using namespace std;

int N;
int teamNumber;
int A, B;
int _min;

int changeToInt(string a) {
	return atoi(a.substr(0, 2).c_str()) * 60 + atoi(a.substr(3, 2).c_str());
}

void go(int& sum, string s)
{
	sum += (changeToInt(s) - changeToInt(prev));
}
int main()
{
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> teamNumber >> _min;

		if (A > B) {

		}
		else if (B > A) 
		{

		}
	}
}