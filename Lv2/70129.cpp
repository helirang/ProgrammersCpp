#include <string>
#include <vector>

using namespace std;

string ToBinary(int n) {
    string result = "";
    if (n / 2 != 0) {
        result += ToBinary(n / 2);
    }
    result += to_string(n % 2);
    return result;
}


vector<int> solution(string s) {
    vector<int> answer = {0,0};

    while (true)
    {
        int oneCount=0;
        for (int i = 0; i < s.size();i++) {
            if (s[i] == '0') answer.at(1)++;
            else if (s[i] == '1') oneCount ++;
        }
        s = ToBinary(oneCount);
        answer.at(0)++;
        if (s.size()==1) break;
    }

    return answer;
}
