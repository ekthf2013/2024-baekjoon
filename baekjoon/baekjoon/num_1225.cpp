//1225 문제 - 이상한 곱셈

#include <iostream>
using namespace std;

int main(){
    string A, B; //길이를 알아내기 위해 문자열로 받음
    int a[10000], b[10000]; //10000자리 까지
    long long int ans = 0; //오버플로우 방지를 위해 long long int형 사용
    cin >> A >> B;
    
    for(int i=0; i<A.length(); i++) //입력받은 A의 길이만큼 정수형 배열에 저장하는 반복문
        a[i] = A[i] - 48; //정수로 입력받기 위함 (아스키코드 0이 48부터)
    for(int i=0; i<B.length(); i++)
        b[i] = B[i] - 48;
    
    for(int i=0; i<A.length(); i++)
        for(int j=0; j<B.length(); j++)
            ans += a[i] * b[j];
    
    cout << ans << endl;
}
