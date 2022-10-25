#include <string>
#include <vector>

using namespace std;

int GetGcd(int a, int b){
    return (a % b == 0 ? b : GetGcd(b, a % b));
}

int Factorization(int a){
    for(int i=2; i<=a;i++){
        while(a%i ==0){
            a/=i;
            if(i != 2 && i != 5) return 2;
        }
    }
    return 1;
}

int solution(int a, int b) {
    int answer = 0;
    int gcd = GetGcd(a,b);
    answer = Factorization(b/gcd);
    return answer;
}
