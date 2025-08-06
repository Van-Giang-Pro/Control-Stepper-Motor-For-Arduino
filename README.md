## Control Stepper Motor For Arduino

Điều khiển động cơ bước với Arduino Mega 2560 qua Serial Monitor.

## Mô tả

Project đơn giản để điều khiển góc quay của động cơ bước. Nhập góc từ 0-360 độ vào Serial Monitor, động cơ sẽ quay đúng góc đó.

## Phần cứng cần thiết

Arduino Mega 2560
Driver TB6600
Động cơ bước NEMA 17
Nguồn cấp 12-24V
Dây nối

## Kết nối

Arduino Mega    →    Driver A4988
Pin 2 (PUL)     →    PUL
Pin 3 (DIR)     →    DIR  
Pin 4 (ENA)     →    ENA
GND             →    GND
5V              →    VCC
