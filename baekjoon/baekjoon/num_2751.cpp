//2751 문제 - 수 정렬하기 2

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int arr[N];
    for (int i=0; i<N; i++)
        cin >> arr[i]; //수 입력받음
    sort(arr, arr+N);
    
    for (int i=0; i<N; i++)
        cout << arr[i] << "\n";
}
