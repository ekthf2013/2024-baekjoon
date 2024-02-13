//1076 문제 - 저항

#include <iostream>
#include <string>
using namespace std;

int main(){
    string color[10] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    int num1 = 0; //첫번째 저항값
    int num2 = 0; //두번째 저항값
    long long num3 = 1; //세번째 저항값 *long long = int보다 더 많은 수를 입력받을 수 있다
    
    string A,B,C;
    cin >> A >> B >> C;
    for (int i=0; i<10; i++){
        if(A == color[i]) //첫번째 저항값과 같은 색이 있다면
            num1 = i * 10; //첫번째는 십의 자리가 되므로 10을 곱함
        if(B == color[i]) //두번째 저항값과 같은 색이 있다면
            num2 = i; //두번째 저항값은 일의 자리가 되므로 그대로 값이 됨
        if(C == color[i]) //세번째 저항값과 같은 색이 있다면
            for (int j=0; j<i; j++) //거듭제곱을 통해 저항값들의'곱' 수를 만들어줌
                num3 *= 10;
    }
    long long ans = (num1 + num2) * num3;
    cout << ans << endl;
}
