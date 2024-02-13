//1152 문제 - 단어의 개수

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word; //문자열을 받을 문자열 변수
    int num = 0; //단어의 개수를 입력받을 정수형 변수
    getline(cin,word); //getline 함수를 이용하여 문자열을 입력받고 word에 저장 (공백포함 입력받음)
    
    if(word[0] != ' ' ) //처음 문자가 공백이 아니라면 단어 개수 +1
        num++;
    if(word[word.length()-1] == ' ') //마지막 문자가 공백이라면 단어 개수 -1
        num--;
    for(int i=0; i<word.length(); i++){
        if(word[i]==' ') //공백이 있으면 단어의 개수 +1
            num++;
    }
    cout << num << endl; //단어의 개수 출력
}
