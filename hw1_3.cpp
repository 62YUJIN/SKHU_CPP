/*
과제코드 : hw1_3
작성자 : 김유진
작성일 : 2017.03.21
내용 : 네임스페이스
*/
#include <iostream>
namespace myNs { // myNs라는 이름공간 정의
	int myMax(int x, int y, int z); // 최대값을 구할 myMax 원형함수 정의
	int myMin(int x, int y, int z); // 최소값을 구할 myMin 원형함수 정의
}

int main(void) {
	int x; // 사용자가 입력할 1번째 정수의 변수
	int y; // 사용자가 입력할 2번째 정수의 변수
	int z; // 사용자가 입력할 3번째 정수의 변수
	
	std::cout << "hw1_3 : 김유진\n";
	std::cout << "3개의 정수 입력 :";
	std::cin >> x >> y >> z; // 사용자가 3개의 정수를 입력
	std::cout<<"최대값 :"<< myNs::myMax(x, y, z); // 이름공간 호출 후, 최대값 출력
	std::cout<<"최소값 :"<< myNs::myMin(x, y, z); // 이름공간 호출, 최소값 출력
}

int myNs::myMax(int x, int y, int z) { //최대값 원형함수에 대응하는 함수 정의
	if (x > y && x > z) {
		return x;
	}
	else if (y > x && y > z) {
		return y;
	}
	else{
		return z;
	}
}
int myNs:: myMin(int x, int y, int z) { //최소값 원형함수에 대응하는 함수 정의
	if (x < y && x < z) {
		return x;
	}
	else if (y < x && y < z) {
		return y;
	}
	else{
		return z;
	}
}