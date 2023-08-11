## Repository for Home Automation IOT mini projects using the SST board 

The SST IoT Devlopment Board is a ESP-32 Module mounted on a custom PCB and integrated with different Sensors and Accuators, using which strong Embedded and IoT fundamentals are developed by deploying and implementing various projects involving cloud, ML and various other industry stacks.
 -----------
## PROGRAM

### Program 1 : Remotely controling LEDs
#### In this program LEDs connected to the ESP 32 moduule is controlled remotely by using the blynk server. After uploading the code to the board, we can directly contol the LED from our blynk account. This can be used on a larger scale for home automation and controlling other appliances.
Code: [LINK]()

BLYNK WINDOW
![Screenshot (239)](https://github.com/aditya-142/iot/assets/105287623/d61f9e4c-6c4e-4618-bb87-c3496eff5fc4) 
OFF
![Screenshot (240)](https://github.com/aditya-142/iot/assets/105287623/0460e0b0-a3d7-4213-9ef7-5e44048cda37)
ON
### Program 2: Remotely monitor temperature and humidity
#### In this program we read the DHT11 data in the blynk server. The sensor is connected to the ESP32 module and its data is directly sent to the blynk server using WiFi. We can directly monitor the humidity and temperature of our house remotely on the blynk app or website.
Code: [LINK]()

### Program 3: Operate LED from firebase website
#### In this program we operate an LED connected to the ESP32 module directly from the firebase website that we created. When the value is changed on our firebase website the output of the LED changes accordingly.
Firebase: [LINK](https://buzzer-7eaeb-default-rtdb.firebaseio.com/)
Code: [LINK]()
BLYNK WINDOW
![Screenshot (242)](https://github.com/aditya-142/iot/assets/105287623/3cfaf930-e981-41bd-bfc5-c688d538e377)
OFF
![Screenshot (243)](https://github.com/aditya-142/iot/assets/105287623/a57440b1-b31b-43dc-a335-eb0aacd62c5f)
ON
 ## SST IoT Development Board Pin Description

| **Components** | **GPIO PIN DESCRIPTION** |
|:----:|:----:|
|Buzzer | 14 |
|Bluetooth| RX - 16, TX - 17 |
| DHT 11| 32 |
| DC Motor | M1 - 25/33, M2 - 26/27|
| LCD | SCL - 22, SDA - 21 |
| ON Board LED | 02 |
| OLED | SCL - 22, SDA - 21 |
| RGB LED | 4 |
| RELAY | 13 |
| Servo Motor | S1 - 12, S2 - 2, S3 - 15|
| SD CARD | CS - 5, SCK - 18, MOSI - 23, MISO - 19 | 
| UART 0 | TX0 - 01, RX0 - 03 |

| **Components** | **GPIN PIN DESCRIPTION** |
|:----:|:----:|
|POT | 34 |
|PUSH BUTTON | 35 |
|LDR | 36 |
|Thermister | 39 |
