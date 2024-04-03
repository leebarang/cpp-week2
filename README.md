# 숫자 야구 Game
숫자 야구는 C++로 작성된 게임입니다. 플레이어는 중복되지 않으며 무작위로 정해진 0~9의 숫자 3개를 맞춰야 합니다.   
만약 시도한 숫자와 정답 숫자가 같고 위치가 같을 때는 strike, 정답 숫자는 같으나 위치가 다를 때는 ball이 출력됩니다.   
플레이어는 5번의 시도 안에 도전에 성공해야 합니다.   
이 게임 프로젝트에는 main.cpp, game.cpp, util.cpp 세 개의 파일이 포함되어 있습니다.   
@version 1.0.2 (v3)

## 파일 구성
### main.cpp
* main(): 게임을 진행하며 게임이 끝나지 않았다면 strike 와 ball의 정보가 담긴 string을 출력합니다.
### game.cpp
* progress_game(): 게임의 종료 여부를 판별하고, 끝나지 않았다면 strike 와 ball의 정보가 담긴 string을 반환힙니다.
* get_chance(): 남은 도전 횟수를 반환합니다.
* is_end(): 게임 종료 여부를 반환합니다.
### utll.cpp
* make_answer(): 랜덤한 정답을 만듭니다.
* get_guess(): 사용자에게 추측값을 입력받습니다.

## 실행 방법
프로젝트를 다운로드하고 소스 코드를 가져옵니다.   
컴파일러가 C++11 이상을 지원하는지 확인합니다.   

```
git clone https://github.com/leebarang/cpp-week2.git 
cd snake

g++ -Werror -c main.cpp game.cpp util.cpp
g++ -o main.exe main.o game.o util.o
./main.exe
```

## 게임 규칙
* 플레이어는 총 5번의 기회가 주어집니다.   
* 123, 456, 963 등 중복되지 않은 숫자 3개를 입력해야합니다.
* 주어진 기회 안에 정답을 맞추면 플레이어의 승리, 기회를 모두 소진하면 플레이어의 패배입니다.
