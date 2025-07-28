# EnviroSense

## Project Overview
EnviroSense is an Arduino-based environmental monitoring system that uses a DHT11 sensor to measure humidity, temperature (in Celsius and Fahrenheit), and heat index. The measurements are displayed on a 16x2 LCD with scrolling text for longer values and output to the Serial Monitor every few seconds.

## Components and Features
- **Components**:
  - DHT11 Temperature and Humidity Sensor
  - 16x2 LCD Display (with parallel interface)
  - Arduino Board (e.g., Uno)
  - Jumper wires
  - Breadboard (optional)
  - Resistor (4.7k–10k ohm, optional for DHT11 data pin pull-up)
- **Features**:
  - Measures relative humidity (%).
  - Measures temperature in Celsius and Fahrenheit.
  - Computes heat index in Celsius and Fahrenheit.
  - Displays values on a 16x2 LCD with scrolling for longer text.
  - Outputs data to the Serial Monitor.
  - Includes error handling for invalid sensor readings.

## Hardware Requirements
- Arduino Uno (or compatible board)
- DHT11 Temperature and Humidity Sensor
- 16x2 LCD Display (compatible with LiquidCrystal library)
- 4.7k–10k ohm resistor (optional for DHT11)
- Jumper wires
- Breadboard (optional)

## Setup Instructions
1. **Wiring**:
   - Connect the DHT11 sensor:
     - VCC to Arduino 5V
     - GND to Arduino GND
     - Data (OUT) to Pin 7
     - (Optional) Add a 4.7k–10k ohm pull-up resistor between VCC and Data pin
   - Connect the 16x2 LCD:
     - RS to Pin 12
     - EN to Pin 11
     - D4 to Pin 5
     - D5 to Pin 4
     - D6 to Pin 3
     - D7 to Pin 2
     - VSS to Arduino GND
     - VDD to Arduino 5V
     - VO to potentiometer wiper (for contrast, other legs to 5V and GND)
     - RW to Arduino GND
2. **Software**:
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
   - Install the required libraries:
     - `DHT` by Adafruit: In Arduino IDE, go to Sketch > Include Library > Manage Libraries, search for "DHT sensor library" by Adafruit, and install.
     - `LiquidCrystal`: Included with Arduino IDE (no installation needed).
   - Copy the `src/envirosense.ino` code into the Arduino IDE.
3. **Upload**:
   - Connect your Arduino to your computer via USB.
   - Upload the code to your Arduino board.

## Usage Instructions
1. Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
2. The system will:
   - Read humidity, temperature (Celsius and Fahrenheit), and heat index.
   - Display on the LCD:
     - First screen: Humidity (%) and Temperature (Celsius) for 4 seconds.
     - Second screen: Temperature (Fahrenheit), scrolling if needed.
     - Third screen: Heat Index (Celsius and Fahrenheit), scrolling if needed.
     - Error message if sensor readings fail.
   - Output to Serial Monitor:
     - `Humidity: [value] %`
     - `Temperature: [value] deg.C  [value] deg.F`
     - `Heat Index: [value] deg.C  [value] deg.F`
3. Place the DHT11 sensor in the environment to monitor and observe the LCD and Serial Monitor.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing
Feel free to fork this repository, make improvements, and submit pull requests. Suggestions for new features or bug fixes are welcome!
