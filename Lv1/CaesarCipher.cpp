#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char element : s){
        int tempNum = (int)element;
        int addNum = n;
        if(tempNum == 32) addNum = 0;
        else if(tempNum < 91 && 90 < tempNum +n) tempNum -= 26;
        else if(96 < tempNum && 122 < tempNum+n) tempNum -= 26;
        answer += (char)(tempNum+addNum);
    }
    return answer;
}
