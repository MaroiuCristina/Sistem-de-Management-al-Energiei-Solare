#include <Servo.h>
Servo servo1;


// Panou 1
int LDR1 = A1;
int LDR2 = A0;
int pos1 = 90;
// Servo pins
int servoPin1 = 4;
// Sensibilitate
int prag = 100;

void setup() {
  Serial.begin(9600);
  servo1.attach(servoPin1);
  servo1.write(pos1);
  
  delay(1000);
}
void loop() {
  // Panou 1
  int R1 = analogRead(LDR1);
  int R2 = analogRead(LDR2);
  int dif1 = R1 - R2;

  if (dif1 > prag) {
    pos1--;
  
  } else if (dif1 < -prag) {
    pos1++;
    
  }
  pos1 = constrain(pos1, 0, 180);
  servo1.write(pos1);
  // Debug
  Serial.print("=============> ");
  Serial.print(R1);
  Serial.print(" / ");
  Serial.print(R2);
  Serial.print(" <=============\n ");
  delay(25);
}
