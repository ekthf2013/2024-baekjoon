//2798 문제 - 블랙잭

#include <iostream>
using namespace std;

int main() {
    int N[2];
    int sum = 0;
    int min = 99999;
    int a = 0;
    int ans = 0;
    for (int i=0; i<2; i++) //첫번째 줄(N) 2개의 정수를 받는다.
        cin >> N[i];
    
    int M[N[0]];
    for (int i=0; i<N[0]; i++) {
        cin >> M[i]; //위에서 입력받은 카드의 개수만큼 입력받음
    }
    
    for (int i=0; i<N[0]; i++){
        for (int j=0; j<N[0]; j++)
            for (int k=0; k<N[0]; k++)
                if(i != j && j != k && i != k){ //같은 숫자의 카드는 뽑을 수 없음
                    sum = M[i] + M[j] + M[k]; //카드 3장의 합을 구함
                    a = N[1] - sum;
                    if(a >= 0 && a <= min){ //차가 0과 양수일 때와 최소값을 구하는 조건을 이용
                        min = a;
                        ans = sum; //주어진 기준값이 최소일 때의 합을 입력
                    }
                }
    }
    cout << ans;
}
