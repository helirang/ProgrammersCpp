#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int onStack = 0;
    for(char element : s){
        if(element == '(') onStack ++;
        else {
            if(onStack <= 0){
                answer = false;
                break;
            }else{
                onStack--;
            }
        }
    }
    if(onStack != 0) answer = false;

    return answer;
}
