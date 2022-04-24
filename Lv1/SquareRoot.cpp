#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    answer = sqrt(n) - (int)sqrt(n) == 0 ? 
        pow(sqrt(n)+1,2) : -1;
    return answer;
}
