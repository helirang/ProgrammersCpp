//다른 사람 코드
vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    for (auto& s : score)
    {
      //각 벡터에 3번째 위치에 1,2번을 합한 값을 추가
        s.emplace_back(s[0] + s[1]);
    }

    for (const auto v : score)
    {
        int count = 0;
        for (const auto t : score)
        {
          //각 3번 값마다 모든 3번 값을 비교한다.
            count += (t[2] > v[2]);
        }
        answer.emplace_back(count + 1);
    }

    return answer;
}

//내 코드
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<vector<int>> score) {
//    vector<int> answer;
//    vector<float> temp;
//    map<float, int> tempMap;
//    for (int i = 0; i < score.size();i++) {
//        float average = (float)(score[i][0] + score[i][1]) / 2;
//        temp.push_back(average);
//        tempMap.insert(make_pair(average, i));
//    }
//
//    int rank = 1;
//    int count = 0;
//    int range = 0;
//    sort(temp.rbegin(), temp.rend());
//    for (int i = 0; i < temp.size();i++) {
//        if (i < temp.size() - 1 && temp[i] != temp[i + 1]) {
//            tempMap[temp[i]] = rank;
//            rank += 1 + count;
//            count = 0;
//        }
//        else if (i == temp.size() - 1) tempMap[temp[i]] = rank;
//        else count++;
//    }
//
//    for (auto data : score) {
//        float average = (float)(data[0] + data[1]) / 2;
//        answer.push_back(tempMap[average]);
//    }
//
//    return answer; 
//}
