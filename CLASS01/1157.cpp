#include "iostream"
#include <cstring>
using namespace std;

//다시 짜보기

int main() {
    int total = 26;
    bool isNotOnly = false;
    int alphabet[total];
    int max = 0;
    int ascii = 0;
    memset(alphabet, 0, total * sizeof(int));
    string input;
    cin >> input;

    // 소문자 변환 및 알파벳 갯수 저장
    // 포인터 다시 공부할 것
    for (char &i: input) {
        if ('A' <= i && i <= 'Z') {
            i += 32;
        }
        // 아스키 코드 차이로 인덱스 지정
        int alphabetIdx = i - 'a';

        alphabet[alphabetIdx] ++;
    }

    //find max
    for(int &i: alphabet){
        if(max < i){
            max = i;
        }
    }

    for(int i = 0; total > i; i++){
        if(ascii == 0){
            if(alphabet[i] == max){
                ascii = i + 'a';
            }
        }else{
            if(alphabet[i] == max){
                isNotOnly = true;
                break;
            }
        }
    }

    if(isNotOnly){
        cout << '?' << endl;
    }else{
        cout << (char)(ascii - 32);
    }
    return 0;
}