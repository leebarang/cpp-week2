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
    
    for (int i=0; i<3; i++) {
        answer[i] = rand()%10;
    }

    cout << "Answer is " << answer[0] << answer[1] << answer[2] << endl;
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