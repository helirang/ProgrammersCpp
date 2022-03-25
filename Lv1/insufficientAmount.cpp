using namespace std;

long long solution(int price, int money, int count)
{
    long int answer = -1;
    long int payment=0;
    
    for(int i=0; i<count;i++) payment += price*(i+1);
    
    answer = payment > money ?
        payment - money : 0;
    
    return answer;
}
