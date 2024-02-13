//1546 문제 - 평균

#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin >> N; //몇 과목인지 입력받음
    float score[N];
    for (int i=0; i<N; i++) //각 과목 점수를 입력받음
        cin >> score[i];
    float max = 0; //최대값
    for (int i=0; i<N; i++) //최대값 구하는 반복문
        if(score[i] > max)
            max = score[i];
    float avg = 0; //평균값
    for (int i=0; i<N; i++)
        avg += score[i]/max*100;
    float sum = avg/N; //새로운 평균값을 구함
    cout << sum;
}
