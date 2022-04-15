#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++){
        int bigOne = 0;
        for(char element : s){
            if(answer.size()==0)
            bigOne = (int)element > bigOne ? (int)element : bigOne;
            else 
            bigOne = (int)element > bigOne && element < answer[answer.size()-1] ?
                (int)element : bigOne;
        }
        answer += (char)bigOne;
    }
   
    return answer;
}
