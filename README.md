# 🌐 **Incrementing Test Value Using NodeMCU ESP8266 and KiwisIoT Platform**

## 📌 Project Overview

This is my **first IoT project**, developed using the NodeMCU ESP8266 and KiwisIoT platform.

In this project, the ESP8266 generates numbers from **1 to 18** continuously and sends them to the KiwisIoT platform through a Wi-Fi connection.

The received values can be monitored on the KiwisIoT dashboard.

## 🎯 Objective

- To understand the basic concepts of Internet of Things (IoT).
- To learn how to connect NodeMCU ESP8266 to Wi-Fi.
- To understand communication between hardware and cloud platforms.
- To send real-time data to the KiwisIoT dashboard.
- To understand data transmission using channels.

## 🧰 Components Required

- NodeMCU ESP8266
- USB Cable
- Computer or Laptop
- Wi-Fi Connection

## 💻 Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Library
- KiwisIoT Platform

## ⚙️ Technologies Used

- NodeMCU ESP8266
- Arduino IDE
- C++ (Arduino Programming)
- Wi-Fi Communication
- KiwisIoT Platform

## 🔄 Working Principle

1. NodeMCU ESP8266 connects to the Wi-Fi network.
2. KiwisIoT initializes the connection.
3. The program starts generating numbers from 1 to 18.
4. Each number is sent to KiwisIoT through Channel 0.
5. The number increases by 1 every 3 seconds.
6. After reaching 18, the value resets to 1.
7. This process continues continuously.

## 💡 Program Logic

- `testValue = 1` – Initializes the starting value.
- `testValue++` – Increments the value by 1.
- `if (testValue > 18)` – Checks whether the value exceeds 18.
- `testValue = 1` – Resets the value to 1.
- `kiwisiot.send("0", testValue)` – Sends the value to Channel 0.
- `delay(3000)` – Adds a 3-second delay between transmissions.

  [View Arduino Code](./test%20val.ino)

## ☁️ KiwisIoT Platform

KiwisIoT is used to receive and monitor the data sent by NodeMCU ESP8266.

**Channel Configuration:**

- Channel ID: 0
- Data: Incrementing Test Value
- Range: 1 to 18
- Update Interval: 3 seconds

The KiwisIoT dashboard helps visualize the incoming data.

## 📟 Expected Serial Monitor Output

```text
Data sent to KiwisIoT: 1
Data sent to KiwisIoT: 2
Data sent to KiwisIoT: 3
Data sent to KiwisIoT: 4
Data sent to KiwisIoT: 5
...
Data sent to KiwisIoT: 18

```

![Test Output](./test%20op.jpeg)


## 📚 Learning Outcomes

Through this project, I learned:

- Basics of IoT communication.
- Working with NodeMCU ESP8266.
- Connecting a microcontroller to Wi-Fi.
- Using the KiwisIoT Arduino library.
- Sending data to a cloud-based IoT platform.
- Understanding channels and dashboard monitoring.
- Using loops and conditional statements in Arduino programming.

## 🚀 Future Improvements

- Connect physical sensors to NodeMCU.
- Display real-time sensor readings.
- Create interactive IoT dashboards.
- Monitor temperature, humidity, and light intensity.

## 👩‍💻 Project Status

**Completed – My First IoT Project! 🎉**

