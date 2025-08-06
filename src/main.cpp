#include <Arduino.h>

const int PUL = 2;  // Xung
const int DIR = 3;  // Hướng
const int ENA = 4;  // Enable
const float step_angle = 0.45; // Độ nghiêng của mỗi bước (độ)

void setup() {

  Serial.begin(9600);
  Serial.println("Stepper Motor Control");
  Serial.println("Nhập góc bạn muốn quay (0-360) và nhấn enter: ");

  // Cài đặt chân điều khiển
  pinMode(PUL, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(ENA, OUTPUT);
  digitalWrite(ENA, HIGH);

}

void loop() {

  // Nếu có dữ liệu từ Serial
  if (Serial.available() > 0) {
    float angle = Serial.parseFloat(); // Đọc góc từ Serial
    float steps = angle / step_angle; // Tính số bước cần thiết
    Serial.print("Góc đã nhập: ");
    Serial.println(angle);
    Serial.print("Số bước cần thiết: ");
    Serial.println(steps);
  }

  digitalWrite(DIR, HIGH); 
  for (int i = 0; i < 10000; i++)
  {

    digitalWrite(PUL, HIGH);
    delayMicroseconds(60);
    digitalWrite(PUL, LOW);
    delayMicroseconds(60);
  }

  delay(1000); 

  digitalWrite(DIR, LOW);
  for (int i = 0; i < 10000; i++)
  {

    digitalWrite(PUL, HIGH);
    delayMicroseconds(60);
    digitalWrite(PUL, LOW);
    delayMicroseconds(60);
  }

  delay(1000);
}

