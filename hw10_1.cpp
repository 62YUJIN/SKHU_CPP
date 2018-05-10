/*
 * 과제코드 : hw10_1
 * 작성자 : 김유진
 * 작성일 : 2018-05-10
 * 내용 : 연산자 오버로딩 연습
 */
#include <iostream>

using namespace std; // 네임스페이스 사용  std 생략

class Box{
    double length; // 상자의 길이 값을 위한 변수
    double width; // 상자의 너비 값을 위한 변수
    double height; // 상자의 높이 값을 위한 변수
    bool isEmpty; // 불리언형 변수
public:
    // Box는 l, w, h의 매개변수를 가지고, 그 매개변수들은 각 Box 클래스의 변수에 저장
    Box(double l, double w, double h) : length{ l }, width{ w }, height{ h } {
        isEmpty = true; // isEmpty는 참을 반환
    }
    // Box의 매개변수의 값이 없을 시, default 값 0, 0, 0 초기화
    Box() : length{ 0 }, width{ 0 }, height{ 0 } {
        isEmpty = true; // isEmpty는 참을 반환
    }
    double getVolume(){ // 상자의 부피 값을 반환하기 위한 실수형 메소드
        return length * width * height; // 상자의 부피 값 반환
    }
    void print(){ // 상자의 정보를 길이, 너비, 높이, 부피 순으로 출력하는 메소드
        cout << "상자의 길이: " << length << endl; // 상자의 길이 출력
        cout << "상자의 너비: " << width << endl; // 상자의 너비 출력
        cout << "상자의 높이: " << height << endl; // 상자의 높이 출력
        cout << "상자의 부피: " << getVolume() << endl << endl; // 상자의 부피 출력
    }
    Box operator+(const Box &ref){ // Box형 연산자 오버로딩 메소드
        // Box형의 box라는 객체는 너비, 길이, 높이를 각각 연산자에 해당하는 변수로 초기화
        Box box(length + ref.length, width + ref.width, height + ref.height);
        return box; // box 반환
    }
};

int main() {
    Box box1(10.0, 10.0, 10.0), box2(20.0, 20.0, 20.0); // Box형 box1, box2 객체 생성
    Box box3 = box1 + box2; // Box형 box3 객체를 생성하는 동시에 box1과 box2를 더한 값으로 초기화

    cout << "hw10_1 : 김유진" << endl << endl; // 과제 정보 출력

    cout << "상자 #1" << endl;
    box1.print(); // 상자 1에 대한 정보 출력

    cout << "상자 #2" << endl;
    box2.print(); // 상자 2에 대한 정보 출력

    cout << "상자 #3" << endl;
    box3.print(); // 상자 3에 대한 정보 출력
}