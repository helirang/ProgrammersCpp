#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while(n > 0){
        v.push_back(n%3);
        n/=3;
    }
    int k = 1;
    while(!v.empty()) {
        answer += k*v.back();
        v.pop_back();
        k*=3;
    }

    return answer;
}
