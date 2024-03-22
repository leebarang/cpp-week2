#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int answer[3] = {};
int guess[3] = {};

// 자동으로 정답을 만드는 기계
void make_answer() {
    
    using namespace std;
    srand((unsigned)(time(NULL)));
    int num;

    for (int i=0; i<3; i++) {
        answer[i] = rand()%10; 
        for (int j=0; j<i; j++) {
            if (answer[i] == answer[j])
                i--;
        }
    }
}

// 추측값을 반환
void get_guess() {

    using namespace std;
    string input;

    cout << "Enter a guess: ";
    cin >> input;

    for (int i=0; i<3; i++) {
        guess[i] = input[i] - '0';
    }
}