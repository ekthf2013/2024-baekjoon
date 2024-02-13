//1236 문제 - 성 지키기

#include <iostream>
using namespace std;

int main(){
    int N, M;
    int count = 0;
    int row = 0, col = 0;
    int ans;
    cin >> N >> M; //행렬의 크기를 입력받음
    char A[N][M];
    
    for (int i=0; i<N; i++) //경비원의 현황을 입력받는 이중 반복문
        for (int j=0; j<M; j++)
            cin >> A[i][j];
    
    for (int i=0; i<N; i++){ //모든 행에 경비원을 조사
        count = 0; //반복문 돌 때마다 초기화
        for (int j=0; j<M; j++)
            if(A[i][j] == 'X')
                count++;
        if(count == 0) //행에 경비원이 없다면
            row++;
    }
    
    for (int j=0; j<M; j++){ //모든 열에 경비원을 조사
        count = 0; //반복문 돌 때마다 초기화
        for (int i=0; i<N; i++)
            if(A[i][j] == 'X') //모든 열에 경비원 한명이라도 있으면
                count++;
        if(count == 0)
            col++;
    }
    
    if(row >= col) //경비원이 더 부족한 행&열에 맞춰 값을 정한다
        ans = row;
    else ans = col;
    
    cout << ans << endl;
}
