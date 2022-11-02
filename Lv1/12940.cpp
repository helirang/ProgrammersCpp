#include <string>
#include <vector>

using namespace std;

int Gcd(int a, int b){
	while (b > 0)
    	{
        	int temp = a;
        	a = b;
        	b = temp%b;
    	}
	return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = Gcd(n,m);
    answer.push_back(gcd);
    answer.push_back(n*m/gcd);
    return answer;
}
