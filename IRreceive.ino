#include <IRremote.h>

int receiverPin=9;

int ledPin=12;

void setup()
{
  Serial.begin(9600);
  //シリアルモニタの準備



  IrReceiver.begin(receiverPin,true);
  //ここで受信モジュールの信号使うピンを設定します。
  //またbool値をtrueに設定することで、arduinoの内臓LEDが点灯し受信したことが分かりやすくなります。
  
  pinMode(ledPin,OUTPUT);
  //どのピンをどうするか
  
}

void loop()
{
  if(IrReceiver.decode())
  {
     IrReceiver.printIRResultShort(&Serial);
     
  }
  //受信データをデコードする
}