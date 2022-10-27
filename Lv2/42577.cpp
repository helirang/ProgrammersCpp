#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(),phone_book.end());
    for(int i=0; i<phone_book.size();i++){
        for(int j=i+1; j<phone_book.size();j++){
            if(phone_book[i].length()>phone_book[j].length()) continue;

            bool isBreak = false;
            for(int k =0; k<phone_book[i].size();k++){
                if(phone_book[i][k]!=phone_book[j][k]) {
                    isBreak = true;
                    break;
                }
            }
            if(isBreak) break;
            else return false;
        }
    }
    return answer;
}

//남의 코드 [ 공부 더 열심히 해야겠다. ]
bool solutionAnother(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size() - 1; i++) {
        if (phone_book[i + 1].find(phone_book[i]) == 0) {
            return false;
        }
    }

    return answer;
}
