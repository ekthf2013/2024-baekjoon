//1157 문제 - 단어 공부

#include <iostream>
#include <string>
using namespace std;

int main(){
    string word; //입력받은 단어 저장
    cin >> word;
    int max = 0, cnt = 0;
    char ans = '\0';
    int arr[26] = {0, }; //알파벳 개수만큼 배열
    for(int i=0; i<26; i++)
        for(int j=0; j<word.length(); j++){
            if(word[j] > 96)
                word[j] -= 32; //소문자->대문자로 변경
            if(word[j] == i+65) // i+65 = A 임
                arr[i] += 1; //알파벳 배열에 1을 추가
        }
    
    for(int i=0; i<26; i++)
        if(arr[i] > max) { //가장 큰 배열을 찾는다
            max = arr[i];
            ans = i + 65;
        }
    
    for(int i=0; i<26; i++) //다른 알파벳 중 최대와 같은 수가 있는지 확인
        if(max == arr[i])
            cnt ++;
    if(cnt != 1)
        ans = '?';

    cout << ans << endl;
}
