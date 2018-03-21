/*
	과제코드 : hw1_2
	작성자 : 김유진
	작성일 : 2017.03.21
	내용 : 디펄트 매개변수
*/
#include <iostream>

int sum(int n1, int n2, int n3=0, int n4=0) { // 디폴트 매개변수 기능을 사용할 sum() 함수 정의, 3번째와 4번째 변수는 값의 영향을 주지 않기 위해 0으로 초기화
	return n1 + n2 + n3 + n4; // 각 매개변수의 합을 반환
}
 
int main(void) { //main 함수 정의
	std::cout << "hw1_2 : 김유진\n";
	std::cout << "\n"; 
	std::cout << "sum(10, 15)=" << sum(10, 15) << std::endl; // 2번째 정수까지의 합을 출력하기 위해 sum()함수 호출
	std::cout << "sum(10, 15, 25)=" << sum(10, 15, 25) << std::endl; // 3번째 정수까지의 합을 출력하기 위해 sum()함수 호출 
	std::cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << std::endl; // 4번째 정수까지의 합을 출력하기 위해 sum()함수 호출

	return 0;
}