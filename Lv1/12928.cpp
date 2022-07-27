#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i=1; i<= sqrt(n);i++){
        if(n%i ==0){
            answer += i;
            if(i!= n/i) answer += n/i;
        }
    }
    return answer;
}

"N의 약수를 구할 때는, 1부터 N의 제곱근 까지의 수만 0으로 나누어 떨어지는지 확인하면 된다!"
