//2525 문제 - 오븐시계

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C; //시간입력 A=시 B=분 C=소요시간
    if((B+C)>=60){ // 분과 소요시간이 60분이 넘어가면
        A += (B+C)/60; // 60을 나눈 몫을 A(시)에 더함
        B = (B+C)%60; // 60을 나눈 나머지는 B(분)에 더함
        if(A>=24)
            A = A-24;
    }
    else
        B += C;
    cout << A << " " << B;
}
