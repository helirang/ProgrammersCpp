#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = 0;
    string str = to_string(x);
    for(char element : str){
        num += element-'0';
    }
    answer = x%num==0 ? true : false;
    return answer;
}
