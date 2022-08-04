//내 코드 #1 : 개선 전
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int stack = 0;

    for (int i = 0; i < progresses.size();i++) {
        int dividedNum = (100 - progresses[i]) / speeds[i];
        int restNum = (100 - progresses[i]) % speeds[i];
        progresses[i] = restNum == 0 ? dividedNum : dividedNum + 1;
    }

    for (int i = 0; i < progresses.size();i++) {
        if (progresses[i] <= stack) continue;
        answer.push_back(1);
        for (int j = i + 1; j < progresses.size();j++) {
            if (progresses[j] > progresses[i]) break;
            if (progresses[i] >= progresses[j]) answer.back() += 1;
        }
        stack = progresses[i];
    }

    return answer;
}

//개선 코드들 == 최하단 고인물 코드 학습 후 개선한 코드
//내 코드 #2 : 개선 첫번째
vector<int> solutionV1(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int stack = 0;

    for (int i = 0; i < progresses.size();i++) {
        int dividedNum = (100 - progresses[i]) / speeds[i];
        int restNum = (100 - progresses[i]) % speeds[i];
        progresses[i] = restNum == 0 ? dividedNum : dividedNum + 1;
    }

    for (int i = 0; i < progresses.size();i++) {
        if (progresses[i] > stack) answer.push_back(1);
        else answer.back() += 1;
        stack = progresses[i] > stack ? progresses[i] : stack;
    }

    return answer;
}

//내 코드 #3 : 개선 두번째
#include <string>
#include <vector>

using namespace std;

vector<int> solutionV2(vector<int> progresses, vector<int> speeds) {
    vector<int> answer; 
    int stack = 0;

    for (int i = 0; i < progresses.size();i++) {
        int dividedNum = (100 - progresses[i]) / speeds[i];
        progresses[i] = (100 - progresses[i]) % speeds[i] == 0 ? dividedNum : dividedNum + 1;
        if (progresses[i] > stack) answer.push_back(1);
        else answer.back() += 1;
        stack = progresses[i] > stack ? progresses[i] : stack;
    }

    return answer;
}

//고인물 코드
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//    vector<int> answer;
//
//    int day;
//    int max_day = 0;
//    for (int i = 0; i < progresses.size(); ++i)
//    {
//        day = (99 - progresses[i]) / speeds[i] + 1;
//
//        if (answer.empty() || max_day < day)
//            answer.push_back(1);
//        else
//            ++answer.back();
//
//        if (max_day < day)
//            max_day = day;
//    }
//
//    return answer;
//}
