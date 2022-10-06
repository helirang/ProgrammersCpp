#include <string>
#include <vector>

using namespace std;

string solution(string polynomial) {
    //문자 변환 관련 변수
    string delim = " ";
    size_t pos = 0;
    vector<string> line;

    //처리 관련 변수
    int xNum = 0;
    int num = 0;

    string answer = "";

    //문자 변환 코드
    while ((pos = polynomial.find(delim)) != string::npos)
    {
        line.push_back(polynomial.substr(0, pos));
        polynomial.erase(0, pos + delim.length());
    }
    line.push_back(polynomial);

    //처리 코드
    for (int i = 0; i < line.size();i++) {
        string temp = line[i];
        if (temp != "+") {
            if (temp[temp.length() - 1] == 'x')
                xNum += temp[0] == 'x' ? 1 : stoi(temp.substr(0,'x'));
            else
                num += stoi(temp);
        }
    }

    //결과 변환 코드
    answer = xNum == 0 ? to_string(num) : ( xNum == 1 ? "x" : to_string(xNum) + "x");
    if (xNum != 0) answer += num == 0 ? "" : " + " + to_string(num);

    return answer;
}
