#include <string>
#include <vector>

using namespace std;
bool ComparisonStr(string baseStr, string targetStr){
    string base = "";
    string target = "";
    bool bResult = true;
    if(baseStr.size() > targetStr.size()) {
        base = targetStr, target = baseStr;
    }else{
        base = baseStr, target = targetStr;
    }
    if(base[base.size()/2] != target[base.size()/2] ||
      base[base.size()-1] != target[base.size()-1]) return false;
    for(int i=0; i < base.size(); i++){
        bResult = base[i] == target[i] ? true : false;
        if(!bResult) break;
    }
    return bResult;
}

bool solution(vector<string> phone_book) {
    bool answer = true;
    for(int i=0; i < phone_book.size(); i++){
        int backIdx = phone_book.size()-1-i;
        for(int j=i+1; j<phone_book.size(); j++){
            bool bSame = true;
            int backJ = j-1;
            bSame = ComparisonStr(phone_book[i],phone_book[j]);
            if(bSame) return false;
            if(backIdx != backJ)
            bSame = ComparisonStr(phone_book[backIdx],phone_book[backJ]);
            if(bSame) return false;
            if(backIdx <= i) return true;
        }
    };
    return true;
}
