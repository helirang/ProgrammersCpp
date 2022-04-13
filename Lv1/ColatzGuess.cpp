#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long chkNum = num;
    while(1){
        if(chkNum==1) break;
        chkNum = chkNum%2 == 0 ? chkNum/2 : chkNum*3+1;
        answer++;
        if(answer >= 500) {
            answer = -1;
            break;
        }
    }
    return answer;
}
