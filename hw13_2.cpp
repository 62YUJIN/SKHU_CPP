/*
 * 과제 코드 : hw13_2
 * 작성자 : 김유진
 * 작성일 : 2018-05-23
 * 내용 : 템플릿 특수화
 */
#include <iostream>

using namespace std; // 네임스페이스 사용

class Circle {
    int radius;
public:
    Circle(int radius=1) { this->radius = radius; }
    int getRadius() { return radius;}
};

template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
    if(a > b) return a;
    else return b;
}

template <> // 템플릿 특수화
Circle bigger(Circle a, Circle b){
    if(a.getRadius() > b.getRadius()){
        return a; // a 반환
    }
    else return b; // b 반환
}

int main() {
    cout << "hw13_2 : 김유진" << endl << endl; // 과제 정보 출력
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20과 50중 큰 값은 " << c << endl;

    double d = 10.3, e = 20.4, f;
    f = bigger(d, e);
    cout << "10.3과 20.4중 큰 값은 " << f << endl;

    Circle waffle(10), pizza(20), y;
    y = bigger(waffle, pizza);
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}