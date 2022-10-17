#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> zNums;
    string tempStr = "";
    vector<int> idxs;
    for (int i = 0;i < s.length();i++) {
        char ch = s[i];

        if (48 <= ch && ch <= 57||ch==45) {
            tempStr += ch;
        }
        else if (ch == 90) {
            answer -= zNums.back();
            zNums.pop_back();
        }

        if (ch == 32 || i == s.length() - 1) {
            if (tempStr != "") {
                answer += stoi(tempStr);
                zNums.push_back(stoi(tempStr));
            }
            tempStr = "";
        }
    }
    return answer;
}
 
