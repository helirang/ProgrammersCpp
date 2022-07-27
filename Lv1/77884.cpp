#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool IsMeasureEven(int n){
    int num = 0;
    for(int j=1; j<= sqrt(n);j++){
        if(n%j ==0){
            num++;
            if(j!= n/j) num++;
        }
    }
    return num%2==0;
} 

int solution(int left, int right) {
    int answer = 0;
      
    for(int i=left; i <=right; i++){
        bool result = IsMeasureEven(i);
        if(result) answer += i;
        else answer -= i;
    }
    return answer;
}
