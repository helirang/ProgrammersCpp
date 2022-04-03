#include <string>
#include <vector>

using namespace std;

bool Cal(int answersNum ,vector<int> answers, vector<int> user){
    int chkNum = 0;
    chkNum = answersNum > user.size()-1 ?
        answersNum % (user.size()) :
        answersNum;
    return answers[answersNum] == user[chkNum];
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int max = 0;
    vector<int> users = {0,0,0};
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> three = {3,3,1,1,2,2,4,4,5,5};
    for(int i=0; i < answers.size();i++){
        users[0] += Cal(i,answers,one);
        users[1] += Cal(i,answers,two);
        users[2] += Cal(i,answers,three);
    }
    
    for(int i=0; i<3; i++){
        max = max < users[i] ? users[i] : max;
    }
    for(int i=0; i<3; i++){
        if(max == users[i]){
            answer.push_back(i+1);
        }
    }
    return answer;
}
