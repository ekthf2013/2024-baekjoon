//2738 문제 - 행렬 덧셈

#include <iostream>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int A[N][M], B[N][M], ans[N][M]; //행렬 두개와 답을 입력할 행렬 하나
    
    for(int i=0; i<N; i++) //행렬 A에 저장
        for(int j=0; j<M; j++)
            cin >> A[i][j];
    
    for(int i=0; i<N; i++) //행렬 B에 저장
        for(int j=0; j<M; j++)
            cin >> B[i][j];
    
    for(int i=0; i<N; i++) //ans 행렬에 더한 값을 입력
        for(int j=0; j<M; j++)
            ans[i][j] = A[i][j] + B[i][j];
    
    for(int i=0; i<N; i++){ //답을 출력
        for(int j=0; j<M; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}
