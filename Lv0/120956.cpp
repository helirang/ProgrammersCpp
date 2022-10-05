#include <string>
#include <vector>

using namespace std;

void RepeatOperation(int idx, vector<bool> &isContinuity, bool &isComp, string &temp){
    isContinuity[idx] = true;
    isComp = true; 
    temp = "";
    for(int i=0; i<isContinuity.size();i++){
        if(i!=idx)isContinuity[i]=false;
    }
}

int solution(vector<string> babbling) {
    vector<string> canSpeak = {"aya", "ye", "woo", "ma" };
    int answer = 0;
    for(auto i : babbling){
        vector<bool> isContinuity = {false,false,false,false};
        bool isComp = false;
        string temp = "";
        
        for(int j=0; j<i.length();j++){
            temp += i[j];
            isComp = false;
            if(temp == canSpeak[0]){
                if(isContinuity[0]!=false) break;
                RepeatOperation(0,isContinuity,isComp,temp);
            }else if(temp == canSpeak[1]){
                if(isContinuity[1]!=false) break;
                RepeatOperation(1,isContinuity,isComp,temp);
            }else if(temp == canSpeak[2]){
                if(isContinuity[2]!=false) break;
                RepeatOperation(2,isContinuity,isComp,temp);
            }else if(temp == canSpeak[3]){
                if(isContinuity[3]!=false) break;
                RepeatOperation(3,isContinuity,isComp,temp);
            }else if(temp.size() >= 2){
                if(temp == "ay" || temp == "wo") continue;
                else break;
            }
        }
        if(isComp) answer++;
    }
    return answer;
}
