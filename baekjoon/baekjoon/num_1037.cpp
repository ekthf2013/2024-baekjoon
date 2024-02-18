//1037 문제 - 약수

#include <iostream>
using namespace std;

int main(){
    int N = 0, num = 0, max = 0, min = 1000000;
    cin >> num; //약수의 갯수를 받음
    for (int i=0; i<num; i++){
        int A[num];
        cin >> A[i]; //실제 약수를 입력받음
        if (num == 1){ //약수가 한개인 수일때
            N = A[i] * A[i];
            break;
        }
        if (A[i] > max) //최대값 구하기
            max = A[i];
        if (A[i] < min) //최소값 구하기
            min = A[i];
        N = max * min;
    }
    cout << N << endl;
}
