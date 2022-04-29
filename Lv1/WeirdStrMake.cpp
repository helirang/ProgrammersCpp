#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int chk =0;
    for(int i=0; i< s.size();i++){
        bool bChk = chk%2==0;
        bool bSmall = s[i] >= 97;
        int addNum = 0;
        if(s[i]==' ')chk =0;
        else{
            if(bChk && bSmall) addNum = -32;
            else if(!bChk && !bSmall) addNum = 32;
            chk++;
        }
        answer += (s[i]+addNum);
    }
    return answer;
}
