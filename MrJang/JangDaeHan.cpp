//20191450 장대한 3주 과제 제출
 /*선풍기
<< 모델링>>
사물: 선풍기
구성요소:코드,모터, 날개, 가드, 스탠드 버튼(스위치) 등
행동: 코드를 꽂으면 동작할 준비가 되어있다.코드를 뽑으면 모든 행동이 멈춘다.
      날개를 작동한다 날개를 작동하지 않는다.
      모터를 동작하면 선풍기 바람이 들어온다. 모터를 동작하지 않으면 선풍기 바람이 들어오지 않는다.
      스탠드는 위 아래 왼쪽 오른쪽으로 움직일 수 있다.
      버튼
       왼쪽 끝 버튼을 누르면 모든 동작이 종료된다.
       두번째 버튼을 누르면 미풍이 들어온다.
       세번째 버튼을 누르면 중풍이 들어온다.
       네번째 버튼을 누르면 강풍이 들어온다. 

#include <iostream>
using namespace std;
class elfan
{
    //멤버변수
    bool on;// 코드(전원여부)
    bool wing;//날개(회전)
    bool motor; //모터(작동여부)
    int stand; //스탠드(위치 변화)
    int button;// 버튼(풍력)

    //멤버함수
    void codeon();  void codeoff(); 
    void turn(); void Notturn();
    void moterOn(); void moterOff();
    void standup(); void standdown(); void standleft(); void standright();
    void increasebutton(); void decreasebutton();
};

<< 모델링>>
사물: 헤드폰(head phone)
구성요소: 마이크, usb잭, 스위치, 휠, LED 등
행동: usb잭 중 마이크 잭을 컴퓨터에 연결하면 소리가 마이크를 통해 컴퓨터로 전달된다. 헤드셋 잭을 연결하면 컴퓨터 소리를 밖에 새어 나가지 않고 헤드셋으로 들을 수 있다.
마이크를 밀면 밀수록 마이크가 위로 올라간다. 마이크를 당기면 당길수록 마이크가 아래로 내려간다. 스위치를 좌측으로 누르면 헤드셋 시스템이 종료된다. 우측으로 누르면 작동된다.
휠을 좌측으로 밀면 사운드가 커진다. 휠을 우측으로 밀면 사운드가 작아진다. 헤드셋 테두리 LED를 작동해 불빛을 낸다. 헤드셋 LED 불빛을 끈다.


class headPhone
{
    //멤버변수
    bool hdswitch; //스위치(작동여부)
    bool LED; //불빛
    bool usbJack; // 마이크,헤드셋 usb 잭 (잭 둘 중 하나는 무조건 꽂았다는 전제하에 설정)
    int hdmike; // 헤드셋 마이크(헤드셋에 달린 마이크의 위치 변화)
    int hdwheel;// 휠(휠의 움직임에 따른 마이크+헤드셋의 소리 변화)

    //멤버함수
    int hdon(); int hdoff();
    void LEDon(); void LEDoff();
    void say(); void hear();
    void mikelock(); void mikeundo();
    void soundIncrease(); void sounddecrease();
};*/