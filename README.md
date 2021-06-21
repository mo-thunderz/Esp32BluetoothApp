# Esp32BluetoothApp
Code to control your ESP32 with your phone using bluetooth. Please make sure that your ESP32 has integrated Bluetooth. Device used for coding: ESP32-WROOM-32D. Youtube explanation will follow shortly

# Installation
1) Download all files from this repository (Esp32BluetoothApp)
2) Program ESP32 with the "Esp32BluetoothApp.ino", located in the folders \Arduino\Esp32BluetoothApp
3) Open the Bluetooth settings of your phone and scan here for devices (while the ESP32 is programmed and has power). You should find a device called "ESP32_Control". Select this device.
4) navigate to https://appinventor.mit.edu/ and select "create Apps!" on the left top
5) Select "Projects" on the top and then "import project (.aia) from my computer
6) From the ESP32BluetoothApp repository, select the file "ESP32BluetoothApp.aia" located in the folder "MIT inventor"
7) There are two ways to run the app:
7a) Ideal for debugging: on your phone goto your app store and install MIT AI2 Companion. You can then connect your phone to the computer by running this app and on your computer navigating to "Connect" -> AI Companion. This will give you a QR code on your computer screen that you can scan in the MIT AI2 Companion app on your phone.
7b) You can compile the ESP32BluetoothApp and install it on your phone by selecting "Build" -> App (provide QR code for .apk). This will give you a link to install the app on your phone.
8) Run the app (with 7a or 7b), this will prompt a list of all Bluetooth devices you have configured in your phone: select "ESP32_Control" -> Please make sure you have done step 3 BEFORE running the app.
9) There are two ways to test if everything works. 
9a) you can open a serial monitor in your Arduino IDE and set the baud rate to 19200
9b) you can connect LEDs to pins 26, 27 and 14 (dont forget to put a resistor of ~100 ohms in series per LED)

# How to use
https://www.youtube.com/watch?v=aM2ktMKAunw

Have fun ;-)

mo thunderz
