#include <Arduino.h>

void setup() {
   Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
   int time = micros();
   static int counterLoop=0;
   Serial.printf("loop #%d. time=%d\n", counterLoop,time);
   counterLoop++;
   int a=0;

   for(a=0 ;a <2; a++)
   {
      int time1 = micros();
       digitalWrite(LED_BUILTIN, HIGH);
      int time2 = micros();
      Serial.printf("before. time=%d\n", time1);
      Serial.printf("after. time=%d\n", time2);
     digitalWrite(LED_BUILTIN, HIGH);
     delay(1000);
     digitalWrite(LED_BUILTIN, LOW);
     delay(1000);
   }

   for(a=0 ;a <2 ;a++)
   {
     digitalWrite(LED_BUILTIN, HIGH);
     delay(500);
     digitalWrite(LED_BUILTIN, LOW);
     delay(500);
   }

   for(a=0 ;a <10; a++)
   {
      //Serial.println("i am the first project. time=%d", time);
     digitalWrite(LED_BUILTIN, HIGH);
     delay(100);
     digitalWrite(LED_BUILTIN, LOW);
     delay(100);
   }



}
