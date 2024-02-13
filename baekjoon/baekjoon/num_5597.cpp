//5597 문제 - 과제 안 내신 분..?

#include <iostream>
using namespace std;

int main(){
    int num[28];
    int num1=0, num2=0;
    int a = 0;
    for(int i=0; i<28; i++)
        cin >> num[i]; //제출한 출석번호를 입력받는다
    
    for(int i=0; i<30; i++){ //30번까지 맞는지 확인하는 반복문
        a = 0; //a를 초기화 해줌
        for(int j=0; j<28; j++){ //입력받은 출석번호를 가져오는 반복문
            if(i+1 == num[j]) //1~30과 입력받은 출석번호를 비교
                a++; //같은 숫자가 있다면 a=1이 될 것
        }
        if(a == 0){ //a=0이면 같은 숫자가 없었다는 것
            if (num1 == 0)
                num1 = i+1;
            else
                num2 = i+1;
        }
    }
    cout << num1 << endl << num2;
}
