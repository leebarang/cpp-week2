#include <iostream>
#include <string>

/**
 * 숫자 야구
 * 숫자 세개를 입력받아 정답과 비교해서 맞으면 승리하는 게임
 * 같은 숫자와 같은 자리일 경우 strike
 * 같은 숫자지만 다른 자리일 경우 ball
 * @author leebarang
 */

void get_answer();
void get_guess();
std::string progress_game(int[], int[]);
bool is_end();

int main() {

    using namespace std;

    extern int answer[3]; //답
    extern int guess[3]; //추정값

    get_answer();
    while (!is_end()) {
        get_guess();
        cout << progress_game(answer, guess) << endl;
    }

    return 0;
}