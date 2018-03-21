/*
	과제코드 : hw1_1
	작성자 : 김유진
	작성일 : 2017.03.21
	내용 : 구의 부피계산
*/
#include <iostream>

inline double calc_volume(double radius){ // 구의 부피를 계산하기 위한 inline함수 calc_volume 함수 정의
	return (double)4/3 * 3.14 * (radius * radius * radius); // 구의 부피 계산 후 그 값을 반환
}

int main(void) { // main 함수 정의
	double radius; // 반지름을 입력받기 위한 실수형 변수 radius 선언
	std::cout << "hw1_1 : 김유진\n";
	std::cout << "반지름 입력 :"; 
	std::cin >> radius; // 사용자가 반지름을 입력
	std::cout << calc_volume(radius) <<std::endl; // 결과 출력
}