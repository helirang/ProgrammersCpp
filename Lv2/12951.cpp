#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool isFirst = true;
    for (int i = 0; i < s.length();i++) {
        if (s[i] == ' ') {
            isFirst = true;
            answer += s[i];
            continue;
        }
        if (48 <= s[i] && s[i] <= 57) {
            isFirst = false;
            answer += s[i];
            continue;
        }
        if (isFirst) answer += s[i] >= 97 ? (s[i] - 32) : s[i];
        else answer += s[i] <= 90 ? (s[i] + 32) : s[i];
        isFirst = false;
    }
    return answer;
}
