/*
 * 과제코드 : hw10_2
 * 작성자 : 김유진
 * 작성일 : 2018-05-09
 * 내용 : 연산자 오버로딩 연습
 */
#include <iostream>

using namespace std;

class Box{
private:

    double length; // 길이 값에 대한 변수 선언

    double width; // 너비 값에 대한 변수 선언

    double height; // 높이 값에 대한 변수 선언
public:

    Box(double length, double width, double height) : length{length}, width{width}, height{height} {
    }

    Box() : length{ 0 }, width{ 0 }, height{ 0 } {
    }

    double getVolume() { // 부피 출력을 위한 메소드
        return length * width * height; // 매개변수로 받은 길이, 너비, 높이 값을 곱한 값 반환
    }

    void ShowBox(){ // 값에 대한 결과를 출력할 메소드
        cout << "상자의 길이 :" << length << endl; // 길이를 출력
        cout << "상자의 너비 :" << width << endl; // 너비를 출력
        cout << "상자의 높이 :" << height << endl; // 높이를 출력
        cout << "상자의 부피 :" << getVolume() << endl << endl; // 부피를 출력
    }

    friend  int operator== (Box &ref1, Box &ref2);
};

int operator== (Box &ref1, Box &ref2){ // 비교연산자 오버로딩
    if (ref1.getVolume() == ref2.getVolume())//조건
        return 1;//트루값 반환
    else
        return 0;//아닐경우 false값 반환
};

int main() {
    cout << "hw10_1:김유진" << endl << endl; // 과제 정보 출력
    Box box1(10.0, 10.0, 10.0), box2(20.0, 20.0, 20.0); // box1 과 box2 객체 생성과 동시에 초기화
    cout << "상자1#" << endl; // 객체 정보 출력
    box1.ShowBox(); // ShowBox 호출
    cout << "상자2#" << endl; // 객체 정보 출력
    box2.ShowBox(); // ShowBox 호출
    cout << "결과는? " << (box1==box2) << endl; // box1 과 box2가 같은지 출력
}