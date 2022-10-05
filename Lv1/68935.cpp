#include <string>
#include <vector>

using namespace std;
int pow(int base, int repeat) {
    int result = 1;
    for (int i = 0; i < repeat;i++) {
        result *= base;
    }
    return result;
}

string ToReverseTernary(int n) {
    string result = "";
    result += to_string(n % 3);

    if (n / 3 != 0) {
        result += ToReverseTernary(n / 3);
    }
    return result;
}

int TernaryToDecimal(string n) {
    int temp = 0;
    for (int i = 0; i < n.size();i++) {
        int ternary = (int)n[n.size()-1-i] -48;
        if (i == 0) temp += ternary;
        else temp += ternary * pow(3,i);
    }
    return temp;
}

int solution(int n) {
    int answer = 0;
    string reverseTernary = ToReverseTernary(n);
    answer = TernaryToDecimal(reverseTernary);
    return answer;
}
