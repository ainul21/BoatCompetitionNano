#include <Arduino.h>

#define PWM2 2
#define BIN2 3
#define BIN1 4
#define STBY 5
#define AIN1 6
#define AIN2 7
#define PWM1 8

int outR = 0, outL = 0;

void setup() {
    Serial.begin(9600);
    pinMode(PWM1, OUTPUT);
    pinMode(AIN1, OUTPUT);
    pinMode(AIN2, OUTPUT);
    pinMode(PWM2, OUTPUT);
    pinMode(BIN1, OUTPUT);
    pinMode(BIN2, OUTPUT);
    pinMode(STBY, OUTPUT);

    digitalWrite(STBY,HIGH);
}

void loop() {
    
}

void stop() {
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW);
  digitalWrite(BIN2,LOW);
  analogWrite(PWM1,0);
  analogWrite(PWM2,0);
}

void move() {
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2,LOW);
  analogWrite(PWM1,outR);
  analogWrite(PWM2,outL);
}

