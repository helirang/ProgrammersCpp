#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {    
    vector<int> answer;
    int base = 0;
    int add = 0, minus = 1;
    int temp = 0;
    for (int i = 0; i < num;i++) {
        if (temp <= total) {
            temp += add;
            add++;
            if (temp != total && i == num - 1) {
                i--;
                temp -= base;
                base++;
            }
        }
        else if (temp >= total) {
            temp -= minus;
            minus++;
            base--;
            if (temp != total && i == num - 1) {
                i--;
                temp -= add;
                add--;
            }
        }
    }
    for (int i = 0; i < num;i++) {
        answer.push_back(base + i);
    }
    return answer;
}
