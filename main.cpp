#include <iostream>
#include <string>

/**
 * 숫자 야구
 * 숫자 세개를 입력받아 랜덤한 정답과 비교해서 맞으면 승리하는 게임
 * 같은 숫자와 같은 자리일 경우 strike
 * 같은 숫자지만 다른 자리일 경우 ball
 * @author leebarang
 */

void make_answer();
void get_guess();
int get_chance();
bool is_end();
std::string progress_game(int[], int[]);

int main() {

    using namespace std;

    extern int answer[3]; //답
    extern int guess[3]; //추정값

    make_answer();
    while (!is_end()) {
        cout << get_chance() << " chances left." << endl;
        get_guess();
        cout << progress_game(answer, guess) << endl;
    }

    return 0;
}