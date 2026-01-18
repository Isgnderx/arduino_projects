# Blinking LED with Code 💡

This project demonstrates a basic **Arduino LED blinking circuit** using C++.
An LED connected to an Arduino board turns ON and OFF every 1 second.

This repository is part of my **daily GitHub project challenge**, where I upload
at least one small project every day to improve my skills and maintain consistency.

---

## 🧰 Components Used
- Arduino board (Uno / Nano / compatible)
- LED
- 220 ohm resistor
- Jumper cables
- Breadboard
- 5V power (via Arduino)

---

## 🔌 Circuit Connection
- LED **long leg (anode)** → **220 ohm resistor** → **Arduino Pin 7**
- LED **short leg (cathode)** → **GND**

---

## 💻 Arduino Code (C++)
```cpp
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
}
