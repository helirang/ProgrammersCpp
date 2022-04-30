#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
	int maxWidth = 0;
	int maxHeigth = 0;
	for (int i = 0; i < sizes.size();i++) {
		int big = 0, small = 0;
		int width = sizes[i][0];
		int heigth = sizes[i][1];
        // 입력 받은 가로 길이와 세로 길이 중, 큰 값을 big에 할당, 작은 값을 small에 할당
        // 가장 큰 놈을 max 변수들에 저장
		big = width >= heigth ? width : heigth;
		small = width >= heigth ? heigth : width;
		if (maxWidth <= big)maxWidth = big;
		if (maxHeigth <= small)maxHeigth = small;
	}
    // 뽑힌 가장 max 변수들을 곱해서 반환
	return maxWidth * maxHeigth;
}
