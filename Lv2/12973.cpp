#include <iostream>
#include<string>
#include<vector>
using namespace std;

int solution(string s)
{
    int answer = -1;
    vector<char> v;
    
    for(int i =0; i<s.size();i++){
        if(i+1 >= s.size()) v.push_back(s[i]);
        else if(s[i]!=s[i+1]) v.push_back(s[i]);
        else {
            i++;
            continue;
        }
        
        if(v.size() >=2 && v.back() == v[v.size()-2]){
                v.pop_back();
                v.pop_back();
        }
    }
    answer = v.size()==0? 1 : 0;
    return answer;
}
