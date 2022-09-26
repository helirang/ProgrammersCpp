#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    std::string separator = " ";
    int cur_position = 0,position = 0;
    int min, max;
    while (position != std::string::npos) {
        position = s.find(separator, cur_position);
        int len = position - cur_position;
        int tempNum = position != std::string::npos ? 
            stoi(s.substr(cur_position, len)) : stoi(s.substr(cur_position));
        if (cur_position == 0) {
            min = tempNum;
            max = tempNum;
        }
        min = min > tempNum ? tempNum : min;
        max = max < tempNum ? tempNum : max;
        cur_position = position + 1;
    }
    answer = to_string(min) + " " + to_string(max);
    return answer;
} 
