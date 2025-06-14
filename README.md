# 🔧 Arduino Distance Detection System – Proximity Alert with LEDs, Buzzer, and LCD

**Arduino Distance Detection System** is a microcontroller-based project built with an **HC-SR04 ultrasonic sensor**, a **16x2 LCD**, **buzzer**, and **RGB LEDs** to visually and audibly indicate how close an object is. It's ideal for learning embedded systems, electronics, and real-time feedback systems.

---

## 🚀 Getting Started

### 📋 What You Need
- 🧠 Basic knowledge of Arduino and circuits
- 🔌 Arduino UNO (or compatible)
- 📟 HC-SR04 ultrasonic sensor
- 💡 Red, Yellow, Green LEDs
- 📢 Piezo buzzer
- 🖥 16x2 LCD display
- ⚙️ Breadboard, jumper wires, resistors (220Ω)

---

## 🔧 Setup Instructions

### 1. ⚡ Circuit Connections

| Component     | Arduino Pin     |
|---------------|-----------------|
| HC-SR04 Trig  | D9              |
| HC-SR04 Echo  | D10             |
| LCD RS        | D12             |
| LCD E         | D11             |
| LCD D4-D7     | D5, D4, D3, D2  |
| Buzzer        | D6              |
| Red LED       | D8              |
| Yellow LED    | D7              |
| Green LED     | D13             |

> Don’t forget to connect a potentiometer to adjust LCD brightness, and resistors (220Ω) to the LEDs.

---

### 2. 💾 Upload the Code

1. Open the Arduino IDE.
2. Copy and paste the code from [`main.ino`](#).
3. Select your board and COM port.
4. Upload it to your Arduino.

---

## ✨ Features

- 🧠 **Distance Measurement**  
  Uses ultrasonic sensor to detect object distance in real time.

- 📟 **LCD Display**  
  Shows the distance in centimeters and status messages.

- 💡 **Visual Indicators**  
  - Green LED: All clear  
  - Yellow LED: Getting closer  
  - Red LED: Very close (flashes)

- 🔊 **Audible Alerts**  
  - 500 Hz tone when approaching  
  - 1000 Hz tone when very close

---

## 🧠 Logic Flow

1. Measure distance using HC-SR04.
2. Display distance on LCD.
3. Based on distance:
   - ≥ 20 cm → Green LED + No sound
   - 10–19 cm → Yellow LED + 500 Hz tone
   - < 10 cm → Flashing Red LED + 1000 Hz tone

---

## 🛠️ Tech Stack

- **Hardware**: Arduino UNO, HC-SR04, LEDs, LCD, buzzer  
- **Language**: Arduino C++  
- **Libraries**: `LiquidCrystal`  
- **Tools**: Arduino IDE, Tinkercad (for simulation)

---

## 📁 Project Files

- `main.ino` – Arduino source code  
- `README.md` – Project documentation  
- `wiring_diagram.png` – Circuit schematic (optional)  
- `project_report.docx` – Full documentation in Bulgarian

---

## 📸 Preview

![Frantic Fyyran (1)](https://github.com/user-attachments/assets/64e89bd3-080d-4356-8001-453fbb0558dd)


---

## 🧾 License

This project is open-source and free to use under the MIT License.

---

## 👨‍🎓 Author

**[Your Name]**  
📍 School/University: *[Enter your school]*  
📆 Date: *June 2025*
