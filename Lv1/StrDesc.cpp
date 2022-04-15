#include <string>
#include <vector>

using namespace std;

//
string solution(string s) {
    string answer = "";
    string tempIdx = "";
    for(int i=0; i<s.size(); i++){
        int bigOne = 0;
        int idx = 0;
        for(int j=0; j<s.size();j++)
        {
            int num = (int)s[j];
            if(answer.size()==0 && num > bigOne){
                bigOne = num;
                idx = j;
            }else if(num >= bigOne && num <= answer[answer.size()-1]){
                bool bChk = false;
                for(char element : tempIdx){
                    bChk = (int)element == j|| bChk ? true : false;
                }
                if(!bChk){
                    bigOne = num;
                    idx = j;
                }
            }
        }
        tempIdx += (char)idx;
        answer += (char)bigOne;
    }
    return answer;
}
