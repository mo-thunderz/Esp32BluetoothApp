// --------------------------------------------------
//
// Code for control of ESP32 through MIT inventor app (Bluetooth). 
// device used for tests: ESP32-WROOM-32D
// 
// App on phone has three buttons:
// UP: 11 for ON and 10 for OFF
// DOWN: 21 for ON and 20 for OFF
// ON/OFF: 31 for ON and 30 for OFF
//
// Written by mo thunderz (last update: 20.4.2021)
//
// --------------------------------------------------

// this header is needed for Bluetooth Serial -> works ONLY on ESP32
#include "BluetoothSerial.h" 

// init Class:
BluetoothSerial ESP_BT; 

// init PINs: assign any pin on ESP32
int led_pin_1 = 4;
int led_pin_2 = 0;
int led_pin_3 = 2;     // On some ESP32 pin 2 is an internal LED, mine did not have one

// Parameters for Bluetooth interface
int incoming;

void setup() {
  Serial.begin(19200);
  ESP_BT.begin("ESP32_Control"); //Name of your Bluetooth interface -> will show up on your phone

  pinMode (led_pin_1, OUTPUT);
  pinMode (led_pin_2, OUTPUT);
  pinMode (led_pin_3, OUTPUT);
}

void loop() {
  
  // -------------------- Receive Bluetooth signal ----------------------
  if (ESP_BT.available()) 
  {
    incoming = ESP_BT.read(); //Read what we receive 

    // separate button ID from button value -> button ID is 10, 20, 30, etc, value is 1 or 0
    int button = floor(incoming / 10);
    int value = incoming % 10;
    
    switch (button) {
      case 1:  
        Serial.print("UP:"); Serial.println(value);
        digitalWrite(led_pin_1, value);
        break;
      case 2:  
        Serial.print("DOWN:"); Serial.println(value);
        digitalWrite(led_pin_2, value);
        break;
      case 3:  
        Serial.print("ON/OFF:"); Serial.println(value);
        digitalWrite(led_pin_3, value);
        break;
    }
  }
}
