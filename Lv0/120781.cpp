#include <string>
#include <vector>

using namespace std;

bool Verification(int num) {
    bool result = false;
    string numStr = to_string(num);
    for(int i=0; i<numStr.size();i++)
        if (numStr[i] == '3') {
            result = true;
            break;
        }
    return result;
}

int solution(int n) {
    int d = n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) n++;
        else if (Verification(i)) n++;
    }
    return n;
}
