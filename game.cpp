#include <iostream>
#include <string>

bool end = false;

//게임 진행
std::string progress_game(int answer[], int guess[]) {

    int strike = 0;
    int ball = 0;
    
    for (int i=0; i<3; i++) {
        if (answer[i] == guess[i]) {
            strike++;
        }
        for (int j=0; j<3; j++) {
            if (answer[i] == guess[j]) {
                ball++;
            }
        }
    }
    ball -= strike;

    if (strike == 3) {
        end = true;
        return "You win!";
    }
    else {
        return "Strikes: " + std::to_string(strike) + ", Balls: " + std::to_string(ball);
    }
}

bool is_end() {
    return end;
}