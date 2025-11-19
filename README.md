# 🔒 Laser Security System using Arduino Nano

This project is a simple **laser-based security system** made using an Arduino Nano, LDR module, laser diode, and buzzer.  
When someone blocks the laser beam, the LDR detects the change and the buzzer turns ON.

---

## 🛠 Components Used
- Arduino Nano  
- Laser diode module  
- LDR sensor module (3-pin type)  
- Buzzer  
- Jumper wires  
- USB cable  

---

## 🔌 Circuit Connections

### **Laser Diode (3-pin module)**
- VCC → 5V  
- GND → GND  
- OUT → D8  

### **LDR Sensor Module (3-pin)**
- VCC → 5V  
- GND → GND  
- OUT → D9  

### **Buzzer**
- + → D11  
- – → GND  

---

## 💡 Working Principle
- The laser beam continuously hits the LDR.
- When someone passes in front of the laser beam, the light is blocked.
- The LDR detects this change and sends a HIGH signal.
- The buzzer turns ON to alert.

---

## 🧾 Arduino Code
The full project code is available in the `laser_security.ino` file.  
It continuously checks the LDR output and activates the buzzer when the beam is broken.

---

## 📚 Applications
- Door security  
- Window intrusion detection  
- Tripwire alarm  
- School/college mini-project  

---

## 👨‍💻 Author
Created by *Shaikh Suleman Daud*  
For academic and IoT learning purposes.

---

## ⭐ Contribution
Feel free to fork and improve this project!
