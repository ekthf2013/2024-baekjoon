//9506 문제 - 약수들의 합

#include <iostream>
using namespace std;

int main(){
    int n = 0, sum = 0;
    while(1){
        sum = 0;
        cin >> n; //숫자를 입력받음
        int arr[n];
        if(n == -1)
            break; //입력받은 숫자가 -1이면 종료
        for (int i=1; i<n; i++){ //약수를 구하는 반복문 (0을 나눌수없으므로 1부터)
            if(n % i == 0){
                sum += i;
                arr[i] = i;
            }
            else arr[i] = 0;
        }
        if(n == sum){ //완전수가 맞는지 확인
            cout << n << " = 1";
            for(int j=2; j<n; j++) //1을 제외하도록 2부터
                if(arr[j] != 0)
                    cout << " + " << j;
            cout << endl;
        }
        else cout << n << " is NOT perfect." << endl;
    }
}
