#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    //결과 값
    string answer = "";

    //+- 판정에 사용할 숫자
    int num = 0;

    while (true)
    {
        // 나머지 값 저장
        int addNum = n % 3;

        //n이 3보다 크면 작동
        if (n > 3) {
            //이전 값이 0이었으면 num은 -1이 되어서 넘어온다.
            if (num == -1) {
                addNum += num;
                num = 0;
            }

            //나머지 값이 0 일때,
            //나머지 값이 1 인데, 이전 값 영향으로 -1이 되어서 0이 되었을 때,
            //나머지 값이 0 인데, 이전 값 영향으로 음수 값이 되었을 때 처리를 위해 addNum "+=" 3으로 부호 변경
            //이전 부호 addNum=3;
            //값을 처리하고 다음 값에서 -1을 빼도록 셋팅
            if (addNum <= 0) {
                addNum += 3;
                num = -1;
            }
        }
        //n이 3보다 작으면 작동
        else addNum = (n+num);

        //addNum이 3이면 결과값에는 4로 저장되게 셋팅
        addNum = addNum == 3 ? 4 : addNum;

        // 결과값에 숫자 삽입
        //answer+= to_string(addNum)은 끝에 계속 추가
        //answer = to_string(addNum)+answer은 앞에 계속 추가
        answer = to_string(addNum) + answer;

        //n이 3보다 작으면 반복문 종료
        if (n <= 3) break;

        //한번 반복 할 때마다 n을 3으로 나눠 저장한다.
        n = n / 3;
    }
    return answer;
}
