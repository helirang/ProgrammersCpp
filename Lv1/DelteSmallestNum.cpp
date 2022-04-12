#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    if(arr.size() ==1) answer.push_back(-1);
    else{
        for(int num : arr){
           min = num <= min ? num : min;
        }
        for(int num : arr){
            if(num != min) answer.push_back(num); 
        }
    }
    return answer;
}
