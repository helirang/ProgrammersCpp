#include <string>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int maxPeople = people.size();

    for(int i=0;i <= maxPeople;i++){
        int one =0,oneIdx=0,temp=0,twoIdx=0;
        int proNum=2;
        
        for(int j=0; j<people.size();j++){
            if(people.size()==1){
                proNum=2;
                break;
            }
            if(one == 0) {
                one = people[j];
                oneIdx = j;
            }
            else{
                int cal = limit - one+people[j];
                if(cal==0){
                    proNum=1;
                    twoIdx=j;
                    break;
                }else{
                    if(temp==0) temp = cal;
                    else {
                        temp = cal > temp ? cal : temp;
                        if(cal > 0) twoIdx = j;
                     }
                }
            }
        }
        if(temp > 0)proNum=1;
        switch(proNum){
            case 0:
                break;
            case 1:
                people.erase(people.begin() + twoIdx);
                people.erase(people.begin() + oneIdx);
                maxPeople-=2;
                answer++;
                break;
            case 2:
                people.erase(people.begin());
                maxPeople-=1;
                answer++;
                break;
            default:
                break;
        }
    }

    return answer;
}
