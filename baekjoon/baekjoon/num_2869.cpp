//2869 문제 - 달팽이는 올라가고 싶다

#include <iostream>
using namespace std;

int main(){
    int A,B,V;
    cin >> A >> B >> V;
    int day = 1;
    
    day += (V - A)/(A - B); //(V - A) 도달해야하는 목표 (A - B) 하루에 올라가는 높이
    if((V - B) % (A - B) != 0) //나머지가 생기는 경우는 하루를 더 더해주어야 함
        day++;
    cout << day << endl;
}

// --시간 초과--
//    while(1){
//        finish += A;
//        if(finish >= V)
//            break;
//        finish -= B;
//        day++;
//    }
