#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i = 0; i < numbers.size();i++){
        if(i+1 == numbers.size()) break;
        for(int j = i+1; j < numbers.size();j++){
            int addNum = numbers[i] + numbers[j];
            bool bNum = false;
            for(int num : answer){
                bNum = num == addNum ? false : true;
                if(!bNum) break;
            }
            if(answer.size() ==0) answer.push_back(addNum);
            if(bNum) answer.push_back(addNum);
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}
