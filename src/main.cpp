#include <Arduino.h>
#include <Mouse.h> 

void setup() {

  Serial.begin(9600);
  while (!Serial); // Seri portun açılmasını bekle

  Mouse.begin();

  randomSeed(analogRead(PA0) + millis()); // PA0 boşta ise kullanılabilir bir pin
}

void loop() {

  int moveX = random(-5, 6); // -5 ile 5 arasında (6 dahil değil)
  int moveY = random(-5, 6); // -5 ile 5 arasında

  Mouse.move(moveX, moveY);

  delay(50); // 50 milisaniye bekle
}