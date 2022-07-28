#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int num = 0;

    while (true)
    {
        int addNum = n % 3;
        if (n > 3) {
            if (num == -1) {
                addNum += num;
                num = 0;
            }
            if (addNum <= 0) {
                addNum += 3;
                num = -1;
            }
        }
        else addNum = (n+num);

        addNum = addNum == 3 ? 4 : addNum;
        answer = to_string(addNum) + answer;

        if (n <= 3) break;
        n = n / 3;
    }
    
    return answer;
}
