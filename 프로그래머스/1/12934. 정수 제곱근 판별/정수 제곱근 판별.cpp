#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {
    double sqrt_n = sqrt(n);
    if (sqrt_n == static_cast<int>(sqrt_n)) {
        return static_cast<long long>(pow(sqrt_n + 1, 2));
    } else {
        return -1;
    }
}