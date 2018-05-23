/*
 * 과제 코드 : hw13_1
 * 작성자 : 김유진
 * 작성일 : 2018-05-23
 * 내용 : 함수 템플릿
 */
#include <iostream>

using namespace std; // 네임스페이스 사용

template <typename T1, typename T2> // 템플릿 사용 T1, T2

T1 biggest(T1 a[], T2 b){ // 매개변수를 두개 받는 템플릿 함수 정의
    int temp = 0;
    // 최댓값을 구하기 위한 반복문
    for(int i = 0; i < b; i++){
        if(a[i] >= a[temp]) {
            temp = i;
        }
    }
    return a[temp]; // 최댓값 반환
};

int main() {
    cout << "hw13_1 : 김유진" << endl << endl;
    int x[] = { 1, 10, 100, 5, 4 };
    cout << "x 중 가장 큰수 : "<< biggest(x, 5) << endl;   // 5는 배열 x의 크기
    double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
    cout << "y 중 가장 큰수 : " << biggest(y, 6);    // 6는 배열 y의 크기
    cout << endl;
    return 0;
}