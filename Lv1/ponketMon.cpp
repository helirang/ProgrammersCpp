#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int max =0, kindsNum=0,tempNum=0;
    sort(nums.begin(),nums.end());
    max = nums.size()/2;
    for(int num : nums){
        if(tempNum != num){
            tempNum = num;
            kindsNum++;
        }
    }
    answer = max < kindsNum ? max : kindsNum;
    return answer;
}
