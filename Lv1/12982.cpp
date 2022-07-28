#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    // 합산 값 임시 저장
    int sum = 0;
  
    //값 정렬
    sort(d.begin(), d.end());
  
    for(int i=0; i<d.size(); i++){
        //sum += d[i]가 budget보다 크면 반복문 중단;
        if((sum += d[i]) <= budget) answer++;
        else break;
    }
  
    return answer;
}
