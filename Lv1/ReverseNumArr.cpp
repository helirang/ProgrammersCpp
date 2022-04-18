#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string numStr = to_string(n);
    for(int i=numStr.size()-1; i >= 0; i--){
        answer.push_back((int)numStr[i]-48);
    }
    return answer;
}
