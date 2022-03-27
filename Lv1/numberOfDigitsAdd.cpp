#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string convertArr(to_string(n));
    for(int i=0; i<convertArr.length();i++){
        answer += (int)convertArr[i] -'0';
    }

    return answer;
}
