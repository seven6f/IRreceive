#include <IRremote.h>

int receiverPin=9;

void setup()
{
  //シリアルモニタの準備
  Serial.begin(9600);
  
  //ここで受信モジュールの信号使うピンを設定します。
  //またbool値をtrueに設定することで、arduinoの内臓LEDが点灯し受信したことが分かりやすくなります。
  IrReceiver.begin(receiverPin,true);

  //どのピンをどうするか 
  //pinMode(ledPin,OUTPUT); 
}
void loop()
{
   //受信データをデコードする
  if(IrReceiver.decode())
  {
     IrReceiver.printIRResultShort(&Serial);
  }
}