#include <iostream>
#include <string>

int answer[3] = {};
int guess[3] = {};

// 정답을 반환
void get_answer() {

    using namespace std;
    string input;

    cout << "Enter a answer: ";
    cin >> input;

    for (int i=0; i<3; i++) {
        answer[i] = input[i] - '0';
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