//1316 문제 - 그룹 단어 체커

#include <iostream>
#include <string>
using namespace std;

int main(){
    int N = 0;
    string word;
    cin >> N; //단어의 개수
    int ans = N;
    for (int i=0; i<N; i++){
        cin >> word; //단어를 입력받음
        int arr[26] = {0, }; //알파벳 배열
        bool isGroupWord = true; // 그룹 단어 여부를 나타내는 변수 추가
        for (int j=0; j<26; j++)
            for (int k=0; k<word.length(); k++)
                if(word[k] == j + 97) {
                    if(arr[j] == 1) //이미 1로 변경이 돼있으면
                        if(word[k] != word[k-1]){ //조건을 추가해 전 알파벳과 같은지 확인
                            isGroupWord = false; // 다르다면 그룹 단어가 아님
                            break;
                        }
                    arr[j] = 1; //알파벳이 있으면 배열의 수를 1로 변경
                }
        if (!isGroupWord)
            ans--; // 그룹 단어가 아니면 단어 수 -1
    }
    cout << ans << endl;
}
