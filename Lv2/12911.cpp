#include <string>
#include <vector>

using namespace std;

int BinaryOnes(int num){
    int ones = 0;
    while(num!=0){
        if(num%2==1) ones++;
        num /= 2;
    }
    return ones;
}

int solution(int n) {
    int answer = 0;
    int nBinaryOnes = BinaryOnes(n);
    for(int i=n+1; i<= 1000000; i++){
        if(nBinaryOnes == BinaryOnes(i)){
            answer = i;
            break;
        }
    }
    return answer;
}
