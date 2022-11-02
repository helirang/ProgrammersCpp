#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;
    vector<int> check = {1,2,3,1};
    for (auto ing : ingredient) {
        stack.push_back(ing);

        if (stack.size() >= 4) {
            bool isPack = true;
            for (int i = 1; i <= 4; i++) {
                if (stack[stack.size() - i] != check[check.size() - i]) {
                    isPack = false;
                    break;
                }
            }
            if (isPack) {
                answer++;
                for (int i = 1; i <= 4; i++) {
                    stack.pop_back();
                }
            }
        }
    }
    return answer;
}
