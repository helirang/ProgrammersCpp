string Programmers120838(string letter) {
    string answer = "";
    string mouse = 
        ".-:a,-...:b,-.-.:c,-..:d,.:e,..-.:f,--.:g,....:h,..:i,.---:j,-.-:k,.-..:l,--:m,-.:n,---:o,.--.:p,--.-:q,.-.:r,...:s,-:t,..-:u,...-:v,.--:w,-..-:x,-.--:y,--..:z,";
    int temp = 0;
    int calNum = 0;
    int idx = 1;
    vector<int> translation(2300);
    letter += " ";

    //모스 부호 셋팅
    for (auto ch : mouse) {
        if (ch == ':') {
            calNum = temp;
            temp = 0;
            idx = 1;
            cout << calNum << endl;
        }else if (ch == ',') {
            translation[calNum] = temp+44; //53+44==97;
            calNum = 0;
            temp = 0;
            idx = 1;
        }else{
            temp += (ch-44)*idx;
            idx *= 10;
        }
    }

    //모스 편지 해독
    for (auto ch : letter) {
        if (ch == 32) {
            answer += (char)(translation[temp]);
            temp = 0;
            idx = 1;
        }
        else {
            temp += (ch - 44) * idx;
            idx *= 10;
        }
    }
    return answer;
}
