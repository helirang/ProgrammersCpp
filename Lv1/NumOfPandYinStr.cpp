#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0, yCount =0;
    for(char element : s){
        pCount += element == 'p' || element == 'P' ?
            1 : 0;
         yCount += element == 'y' || element == 'Y' ?
            1 : 0;
    }
    answer = pCount == yCount ? true : false;
    return answer;
}
