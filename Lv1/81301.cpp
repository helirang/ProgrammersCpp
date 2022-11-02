#include <string>
#include <vector>

using namespace std;

int NumCheck(string num, const vector<string>& nums) {
    int result = -1;
    for (int i = 0; i < nums.size();i++) {
        if (num == nums[i]) {
            result = i;
            break;
        }
    }
    return result;
}

int solution(string s) {
    vector<string> nums = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    string tempStr = "";
    string result = "";

    for (auto ch : s) {
        if (ch >= '0' && ch <= '9') {
            result += ch;
        }else{
            tempStr += ch;
            int idx = NumCheck(tempStr, nums);
            if (idx != -1) {
                result += to_string(idx);
                tempStr = "";
            }
        }
    }
    return stoi(result);
}
