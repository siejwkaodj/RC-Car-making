#include <AFMotor.h>    //서보모터 라이브러리
#include <Servo.h>

Servo servo1;
Servo servo2;

void setUp(){
    Serial.begin(9600);

    servo1.attatch(9);       //9번핀
    servo2.attatch(10);

}

void loop(){
    servo1.write(0);
    delay(1000);
    servo1.write(180);
    delay(1000);

    servo2.write(0);
    delay(1000);
    servo2.write(180);
    delay(1000);

}