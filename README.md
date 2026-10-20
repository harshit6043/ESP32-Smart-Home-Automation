###ESP32 Smart Home Automation Using Blynk IoT 🏠###

Project Overview
This project uses an ESP32 microcontroller, Wi-Fi, and the Blynk IoT platform to control up to eight electrical appliances through a mobile interface. It brings everyday appliance control into one simple system, making home automation easier and more convenient. 💡
Features
- Control up to 8 relay channels independently.
- Switch connected appliances ON or OFF using the Blynk mobile app.
- Connect to the system over Wi-Fi.
- Synchronize virtual-pin states when Blynk reconnects.
- Monitor relay activity through the Serial Monitor.
Hardware Requirements
- ESP32 development board
- 8-channel relay module compatible with the ESP32
- Jumper wires and suitable power supply
- Electrical appliances or safe test loads
- Smartphone with the Blynk IoT app
Software and Technologies
- Arduino IDE
- Embedded C++
- ESP32 board support package
- Blynk IoT library and platform
- Wi-Fi connectivity
How It Works
1. The ESP32 connects to the configured Wi-Fi network and Blynk service.
2. Each Blynk virtual pin (V0–V7) corresponds to one relay channel.
3. When a user changes a switch in the app, the ESP32 receives the command and updates the relevant relay.
4. The Serial Monitor prints the state of each relay to help with debugging.
5. When Blynk reconnects, the ESP32 synchronizes the virtual-pin states.
Relay Pin Configuration
Relay Channel	ESP32 GPIO	Blynk Virtual Pin
Relay 1	GPIO 13	V0
Relay 2	GPIO 14	V1
Relay 3	GPIO 16	V2
Relay 4	GPIO 17	V3
Relay 5	GPIO 18	V4
Relay 6	GPIO 19	V5
Relay 7	GPIO 21	V6
Relay 8	GPIO 22	V7


Getting Started 🚀
1. Install the Arduino IDE and add ESP32 board support.
2. Install the Blynk library using the Arduino Library Manager.
3. Create a Blynk template and configure eight switch controls linked to virtual pins V0–V7.
4. Open src/main.ino and enter your Blynk Template ID, Template Name, Auth Token, Wi-Fi name, and Wi-Fi password.
5. Select the correct ESP32 board and port in the Arduino IDE.
6. Upload the sketch and check the Serial Monitor at 115200 baud.
7. Test the relay channels with safe, low-voltage loads before connecting any household appliance.
Project Structure
ESP32-Smart-Home-Automation/
├── docs/
│   └── ESP32 Smart Home Automation Guide.png
├── src/
│   └── main.ino
└── README.md
Safety Notes ⚠️
- Confirm the relay module's voltage requirements and logic compatibility before connecting it to the ESP32.
- Disconnect power before changing wiring.
- Mains electricity can cause serious injury or fire. Use properly rated components, suitable enclosures, and qualified installation for mains-powered loads. Test the system with low-voltage loads first.
- Keep your Blynk authentication token and Wi-Fi credentials private. Do not publish real credentials in a public repository.
Project Guide 📘
Refer to the image in the docs/ folder for the project guide and visual reference.
Acknowledgement
Built as an embedded-systems project exploring Wi-Fi-based appliance control and practical home automation. 🛠️
