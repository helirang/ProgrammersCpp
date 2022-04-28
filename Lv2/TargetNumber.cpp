#include <string>
#include <vector>

using namespace std;

int calculate(vector<int> arr,int depth,int addNum,int targetNum){
    int result = 0;
    if(depth == arr.size()) return 0;
    if(depth==arr.size()-1){
        if(addNum + arr[depth] == targetNum) result+=1;
        if(addNum - arr[depth] == targetNum) result+=1;
    }
    result += calculate(arr,depth+1,addNum+arr[depth],targetNum);
    result += calculate(arr,depth+1,addNum-arr[depth],targetNum);
    return result;
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    answer = calculate(numbers,0,0,target);
    return answer;
}
