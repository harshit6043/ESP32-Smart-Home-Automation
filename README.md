# ESP32 Smart Home Automation Using Blynk IoT 🏠

## 📋 Project Overview
This project leverages an ESP32 microcontroller, Wi-Fi connectivity, and the **Blynk IoT** platform to independently control up to eight electrical appliances through a mobile interface. It integrates everyday appliance control into a seamless, centralized system for enhanced home automation convenience. 💡

---

## ✨ Features
* **8-Channel Control:** Independently control up to eight relay channels.
* **Mobile Interface:** Switch connected appliances ON or OFF remotely using the Blynk mobile app.
* **Wi-Fi Enabled:** Connects directly to your local wireless network.
* **State Synchronization:** Automatically synchronizes virtual-pin states whenever Blynk reconnects.
* **Debugging Support:** Monitor real-time relay activity and state changes directly through the Serial Monitor.

---

## 🛠️ Hardware Requirements
* ESP32 development board
* 8-channel relay module (compatible with ESP32 logic levels)
* Jumper wires and suitable power supply
* Electrical appliances or safe low-voltage test loads
* Smartphone with the **Blynk IoT** app installed

---

## 💻 Software and Technologies
* Arduino IDE
* Embedded C++
* ESP32 Board Support Package
* Blynk IoT Library & Platform
* Wi-Fi Connectivity

---

## ⚡ Relay Pin Configuration

| Relay Channel | ESP32 GPIO Pin | Blynk Virtual Pin |
| :--- | :--- | :--- |
| **Relay 1** | GPIO 13 | V0 |
| **Relay 2** | GPIO 14 | V1 |
| **Relay 3** | GPIO 16 | V2 |
| **Relay 4** | GPIO 17 | V3 |
| **Relay 5** | GPIO 18 | V4 |
| **Relay 6** | GPIO 19 | V5 |
| **Relay 7** | GPIO 21 | V6 |
| **Relay 8** | GPIO 22 | V7 |

---

## 🚀 Getting Started

1. **Setup Arduino IDE:** Install the Arduino IDE and add the ESP32 board support package to your preferences.
2. **Install Libraries:** Navigate to the Library Manager and install the **Blynk** library.
3. **Configure Blynk:** Create a new Blynk template and set up eight individual switch controls linked to virtual pins **V0–V7**.
4. **Update Credentials:** Open `src/main.ino` and input your specific Blynk Template ID, Template Name, Auth Token, Wi-Fi SSID, and Password.
5. **Select Board & Port:** Choose your correct ESP32 development board and communication port in the Arduino IDE.
6. **Upload & Monitor:** Upload the sketch and open the Serial Monitor set at **115200 baud** to verify connection logs.
7. **Test Safely:** Test the relay channels using safe, low-voltage loads before connecting any heavy household mains appliances.

---

## 📁 Project Structure

```text
ESP32-Smart-Home-Automation/
├── docs/
│   └── ESP32 Smart Home Automation Guide.png
├── src/
│   └── main.ino
└── README.md
⚠️ Safety Notes
Voltage Compatibility: Confirm the relay module's operating voltage requirements and logic level compatibility before connecting it to the ESP32.

Power Isolation: Always disconnect the power supply before making or altering any physical wiring.

Mains Electricity Risk: Mains electricity can cause severe injury, electrocution, or fire. Utilize properly rated components, safe protective enclosures, and professional installation for high-voltage loads. Always test with low-voltage setups first.

Credential Privacy: Keep your Blynk authentication token and Wi-Fi credentials secure. Never publish active credentials to a public repository.

📘 Project Guide
Refer to the ESP32 Smart Home Automation Guide Image located in the docs/ folder for visual wiring references and setup diagrams.

💡 Acknowledgement
Built as an embedded systems project exploring Wi-Fi-based appliance control and practical home automation applications. 🛠️
