#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int chkNum =arr[0];
    answer.push_back(chkNum);
    for(int num : arr){
        if(chkNum != num){
            chkNum = num;
            answer.push_back(chkNum);
        }
    }

    return answer;
}
