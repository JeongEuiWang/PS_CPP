#include "iostream"
#include <sstream>

using namespace std;

int main() {
    int total = 0;
    string input, str;
    getline(cin, input);

    stringstream parseInput(input);

    while(parseInput >> str){
        total ++;
    }
    cout << total;

    return 0;
}

// 공백을 포함한 문장 형태의 문자열을 입력받을 때는 getline 메소드를 사용한다.
// iostream의 cin은 공백까지의 결과만 저장한다.

// stringstream은 주어진 문자열에서 필요한 자료형에 맞는 정보를 꺼낼 때 유용하게 사용된다.
// #include <sstream> 전처리 헤더를 필수로 포함해야 합니다
