//2566 문제 - 최댓값

#include <iostream>
using namespace std;

int main(){
    int arr[9][9]; //9X9행렬 생성
    int max = 0;
    int row = 0, col = 0;
    for (int i=0; i<9; i++) //행렬에 숫자를 입력받는 이중반복문
        for (int j=0; j<9; j++)
            cin >> arr[i][j];
    
    for (int i=0; i<9; i++)
        for (int j=0; j<9; j++)
            if(arr[i][j] >= max){ //0을 포함하는 것 주의
                max = arr[i][j]; //최댓값 구하기
                row = i+1; //행 구하기
                col = j+1; //열 구하기
            }
    cout << max << endl;
    cout << row << " " << col << endl;
}
