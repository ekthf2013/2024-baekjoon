//3052 문제 - 나머지

#include <iostream>
using namespace std;

int main(){
    int num[10];
    int a[10];
    int r[42];
    int ans = 0;
    for(int i=0; i<10; i++) //10개의 숫자를 입력받음
        cin >> num[i];
    
    for(int i=0; i<10; i++) //10개 숫자를 42로 나누고 나머지를 배열에 저장함
        a[i] = num[i] % 42;
    
    for(int i=0; i<42; i++) //0~41까지의 나머지를 배열에 저장
        r[i] = 0;
    
    for(int i=0; i<10; i++)
        for(int j=0; j<42; j++)
            if(a[i] == j) //입력한 숫자와 0~41까지의 수가 같다면
                r[j] = 1; //r배열을 바꾼다
    
    for(int i=0; i<42; i++) //r배열 중에 1의 개수를 더해 다른 수를 찾는다
        if(r[i] == 1)
            ans++;
    
    cout << ans << endl;
}
