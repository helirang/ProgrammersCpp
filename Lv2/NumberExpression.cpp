#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    //2중 포문 1~
    for(int i=1;i<=n;i++){
        int chkNum = i;
        // i==n이면 +1
        if(chkNum == n ) {
                answer+=1;
                break;
        }
        // 2~
        for(int j=i+1;j<=n;j++){
            chkNum += j;
            //누적된 값(chkNum) == n이면 +1
            if(chkNum == n ) {
                answer+=1;
                break;
            }else if(chkNum > n) break;
            //누적된 값이 n보다 크면 ==n이 될 수 없으니 중단.
        }
    }
    return answer;
}
