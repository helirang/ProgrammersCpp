#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    //bool 값 배열 생성
    bool bArr[n+1];
    
    //배열 값 초기화
    for(int i=0; i<=n;i++) 
        bArr[i]= false;
    
    //0,1은 체크되지 않게 셋팅
    bArr[0]=true;
    bArr[1]=true;
    
    //2부터 n까지
    for(int i =2; i<=n;i++){
        //이미 체크된 배열이면 패스
        //하단 반복문(j)로 7->14->21...이 체크
        //i=14가 되었을 때, arr[14] == true이니 패스된다.
        if(bArr[i]) continue;
        
        //배수를 체크 5->10->15->20...
        for(int j=2*i;j<=n;j+=i){
            bArr[j]=true;
        }
    }
    
    //false인 배열 모두 출력
    for(int i=2;i<=n;i++){
        if(!bArr[i]) answer++;
    }
    return answer;
}

//참고 https://coding-factory.tistory.com/600
