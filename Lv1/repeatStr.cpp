#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string repeatStr = "수박";
    for(int i=0; i<n/2;i++) answer += repeatStr;
    answer += n%2==0 ? "" : "수";
    return answer;
}
