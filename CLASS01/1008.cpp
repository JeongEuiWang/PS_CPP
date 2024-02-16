#include "iostream"
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    cout.precision(10);
    cout << A / B << endl;
    return 0;
}

// cout.precision() => 출력 자릿수 조절 함수

// division: 정수 니눗셈과 부동 소숫점 나눗셈
// 피연산자가 모두 정수일 경우, 소숫점을 제외한 정수값만 반환한다.
// 두 피연산자 중 하나 이상이 부동소수점 숫자일 경우 소수점을 포함하여 반환한다.

// 실수 자료형 정밀도
// float       : 소수점 이하 6자리,  4byte
// double      : 소수점 이하 15자리, 8byte
// long double : 소수점 이하 18자리, 12byte