//10809 문제 - 알파벳찾기

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int num[26];
    int a;
    getline(cin, word); //단어를 입력받음
    //알파벳 개수 26개
    for (int i=0; i<26; i++)
        num[i] = -1;
    
    for (int i=0; i<word.length(); i++){
        for (int j=97; j<123; j++){
            if(num[j-97] == -1){ //처음 나온 알파벳 위치를 저장할 수 있도록
                if(j == word[i]) //알파벳의 위치와 단어가 같다면
                    num[j-97] = i; //알파벳 순서의 자리에 단어의 위치 순서를 입력
            }
        }
    }

    for(int i=0; i<26; i++)
        cout << num[i] << " ";
    cout << "\n";
}
