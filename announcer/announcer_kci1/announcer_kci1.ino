/******************************************************************************
  Simple SerialMP3Player "Hello World" example of YX5300 chip.

  Copy the "hello.mp3" file to an empty SD card
  Connect the Serial MP3 Player to the Arduino board
    GND → GND
    VCC → 5V
    TX → pin 6
    RX → pin 5

  After compile and upload the code you must hear “Hello world” over and over.


  This example code is in the public domain.

  https://github.com/salvadorrueda/ArduinoSerialMP3Player

  by Salvador Rueda
 *******************************************************************************/

#include "SerialMP3Player.h"

#define TX 6
#define RX 5

SerialMP3Player mp3(RX,TX);


//setting pin Digital Input
const int D7 = 7;
const int D8 = 8;
const int D9 = 9;
const int D10 = 10;
int D7Status = 0;
int D8Status = 0;
int D9Status = 0;
int D10Status = 0;
int delaymp3 = 10000;     // mp3 file duration adjusted

void setup() {
  // put your setup code here, to run once:
  pinMode(D7, INPUT);
  pinMode(D8, INPUT);
  pinMode(D9, INPUT);
  pinMode(D10, INPUT);
  Serial.begin(9600);     // start serial interface
  mp3.begin(9600);        // start mp3-communication
  delay(500);             // wait for init
  }
 
void loop() {
  int D7State = digitalRead(D7);
  int D8State = digitalRead(D8);
  int D9State = digitalRead(D9);
  int D10State = digitalRead(D10);

    if (D7State == HIGH) {
    mp3.play(1);
    Serial.println("Kondisi 1");
    delay(delaymp3);
    return;
  }
    if (D8State == HIGH) {
    mp3.play(2);
    Serial.println("Kondisi 2");
    delay(delaymp3);
    return;
  }
    if (D9State == HIGH) {
    mp3.play(3);
    Serial.println("Kondisi 3");
    delay(delaymp3);
    return;
  }
  if (D10State == HIGH) {
    mp3.play(4);
    Serial.println("Kondisi 4");
    delay(delaymp3);
    return;
  }
  }

