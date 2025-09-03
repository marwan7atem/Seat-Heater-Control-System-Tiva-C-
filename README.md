# Seat-Heater-Control-System-Tiva-C-
A FreeRTOS-based seat heater control system for Tiva-C. Manages driver/passenger seat temperature with multi-level heating, sensor diagnostics, and UART display. Features task scheduling, mutexes, ADC, GPIO, and runtime measurements.
# FreeRTOS Seat Heater Control System

A real-time embedded system implementing a dual-seat heater controller for automotive applications using FreeRTOS on Tiva-C (TM4C123). Features temperature regulation, fault diagnostics, and multi-task coordination.

## ✨ Features

- **Dual-Seat Control**: Independent temperature control for driver and passenger seats
- **Multi-Level Heating**: Off, Low (25°C), Medium (30°C), High (35°C) with ±2°C hysteresis
- **Real-Time OS**: FreeRTOS with 6+ tasks for concurrent operation
- **Sensor Diagnostics**: Detects LM35 temperature sensor failures (5°C-40°C range)
- **Visual Feedback**: LED indicators for heating intensity and error states
- **UART Display**: Shared screen simulation via serial communication
- **Runtime Metrics**: GPTM-based execution time and CPU load measurements
- **Thread-Safe Design**: Mutex-protected shared resources and event-driven tasks

## 🛠️ Hardware Components

- **Microcontroller**: TM4C123GH6PM (Tiva-C LaunchPad)
- **Sensors**: LM35 Temperature Sensors (or potentiometers for simulation)
- **Input**: 3x Push Buttons (2 console + 1 steering wheel)
- **Output**: RGB LEDs (simulating heater intensity), Red LEDs (errors)
- **Communication**: UART for display output

## 🏗️ System Architecture
Application Layer
├── Driver Seat Task Group
├── Passenger Seat Task Group
└── Display Task
|
FreeRTOS Layer
├── Task Scheduler
├── Mutexes/Semaphores
└── Event Flags
|
MCAL Layer (Drivers)
├── GPIO
├── ADC (Temperature Reading)
├── UART (Display Output)
└── GPTM (Timing & Diagnostics)
|
Hardware (Tiva-C MCU)

## 📁 Project Structure
Seat_Heater_FreeRTOS/
├── App/
│ ├── driver_seat.c # Driver seat control task
│ ├── passenger_seat.c # Passenger seat control task
│ ├── display_task.c # UART display management
│ └── diagnostics.c # Fault detection & logging
├── MCAL/
│ ├── adc.c # ADC driver for temperature
│ ├── gpio.c # GPIO driver for LEDs/buttons
│ ├── uart.c # UART driver for display
│ └── gptm.c # Timer driver for metrics
├── FreeRTOS/ # FreeRTOS configuration
│ ├── FreeRTOSConfig.h
│ └── heap_4.c
├── Config/
│ └── system_cfg.h # System configuration
└── Simso/ # Simulation files

## ⚙️ Heating Logic

| Condition | Action | LED Indicator |
| :--- | :--- | :--- |
| ΔT ≥ +10°C | High Intensity | Cyan |
| +5°C ≤ ΔT < +10°C | Medium Intensity | Blue |
| +2°C ≤ ΔT < +5°C | Low Intensity | Green |
| ΔT < +2°C | Heater Off | Off |
| Sensor Fault | Disable Heating | Red |

## 🚀 Getting Started

### Prerequisites
- **IDE**: [Code Composer Studio](https://www.ti.com/tool/CCSTUDIO) or Keil MDK
- **Hardware**: Tiva-C TM4C123G LaunchPad
- **Tools**: Potentiometers (for temperature simulation), LEDs, buttons

Testing

Adjust potentiometers to simulate temperature changes

Press buttons to cycle through heating levels

Monitor UART output for system status

Trigger faults by setting temperatures outside valid range (5°C-40°C)

📊 Performance Metrics
The system provides real-time metrics:

Task execution times

CPU utilization statistics

Resource lock times

Diagnostic timestamps

👨‍💻 Developer
Marwan Mohamed Hatem

Email: marwanhatem017@gmail.com

LinkedIn: https://www.linkedin.com/in/marwan-hatem-6a516b225/

GitHub: https://github.com/marwan7atem

📄 License
This project was developed as part of the Real-Time Systems with FreeRTOS course from Edges For Training. Code is provided for educational purposes.

