//1235 문제 - 학생 번호

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<string> v; // 학생들의 뒤집은 번호를 저장할 벡터
    int n, k = 1; // 학생 수와 번호를 다르게 만드는 최소 k
    cin >> n; // 학생 수 입력
    
    while (n--){ //학생 수만큼 반복
        string str;
        cin >> str; //학번 입력받기
        reverse(str.begin(), str.end()); // 입력 받은 번호를 뒤집음 str.begin()-시작부터, str.end()-끝까지
        v.push_back(str); // 뒤집은 번호를 벡터에 추가
    }
    
    while (true){
        set<string> s; // 중복을 허용하지 않는 set을 사용해 중복을 제거 1. 숫자든 문자든 중복을 없엔다. 2. 삽입하는 순서에 상관없이 정렬되서 입력이 된다.
        for (int i = 0; i < v.size(); i++) //v는 학생번호를 저장하고 있음
            s.insert(v[i].substr(0, k)); //substr-부분 문자열 추출 (시점,길이)
        if (s.size() == v.size()) // set의 크기와 학생 수가 같으면 모든 학생들이 서로 다른 수를 가지고 있음
            break; //종료
        else
            k++; // 아니라면 k값 추가
    }
    cout << k; // 결과 출력
}
