#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a =0, b=1,temp = 0;
    int parseNum = 1234567;
    for(int i=2; i<=n; i++){
        temp = (a%parseNum)+(b%parseNum);
        a = b;
        b = temp;
    }
    answer = b%parseNum;
    return answer;
}
// (A+B) % C == ((A%C) + (B%C) % C)
// (A+B)를 C로 나눈 나머지 값은 오른쪽과 같다.
// 따라서 A%C와 B%C를 사용하면 int 값을 넘지 않고 로직을 진행 할 수 있다.
