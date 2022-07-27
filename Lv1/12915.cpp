#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class cmp {
    int str_num;
public:
    cmp(int n) : str_num(n) {};
    bool operator()(string a, string b) {
        if (a[str_num] == b[str_num]) return a < b;
        else return a[str_num] < b[str_num];
    }
};

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    sort(strings.begin(), strings.end(), cmp(n));
    return strings;
}

//참고
//비교 함수에 매개변수 전달 방식 : https://stackoverflow.com/questions/4066576/passing-a-parameter-to-a-comparison-function
//비교 정렬 : https://blockdmask.tistory.com/178
