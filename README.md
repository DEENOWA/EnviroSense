# DHT11 Temperature and Humidity Sensor

## Project Overview
This Arduino-based project uses a DHT11 sensor to measure ambient temperature (in Celsius and Fahrenheit), humidity, and compute the heat index. The measurements are displayed on the Serial Monitor every 2 seconds, making it ideal for environmental monitoring applications.

## Components and Features
- **Components**:
  - DHT11 Temperature and Humidity Sensor
  - Arduino Board (e.g., Uno)
  - Jumper wires
  - Breadboard (optional)
- **Features**:
  - Measures relative humidity (%).
  - Measures temperature in Celsius and Fahrenheit.
  - Computes heat index in Celsius and Fahrenheit.
  - Outputs data to the Serial Monitor every 2 seconds.

## Hardware Requirements
- Arduino Uno (or compatible board)
- DHT11 Temperature and Humidity Sensor
- Jumper wires
- Breadboard (optional)
- Resistor (4.7k–10k ohm, optional for DHT11 data pin pull-up)

## Setup Instructions
1. **Wiring**:
   - Connect the DHT11 sensor:
     - VCC to Arduino 5V
     - GND to Arduino GND
     - Data (OUT) to Pin 4
     - (Optional) Add a 4.7k–10k ohm pull-up resistor between VCC and Data pin
2. **Software**:
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
   - Install the `DHT` library by Adafruit:
     - In Arduino IDE, go to Sketch > Include Library > Manage Libraries.
     - Search for "DHT sensor library" by Adafruit and install it.
   - Copy the `src/dht11_sensor.ino` code into the Arduino IDE.
3. **Upload**:
   - Connect your Arduino to your computer via USB.
   - Upload the code to your Arduino board.

## Usage Instructions
1. Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
2. The system will:
   - Read humidity, temperature (Celsius and Fahrenheit), and heat index every 2 seconds.
   - Display the values in the Serial Monitor with the format:
     - `Humidity: [value] %`
     - `Temperature: [value] deg.C  [value] deg.F`
     - `Heat Index: [value] deg.C  [value] deg.F`
3. Place the DHT11 sensor in the environment you want to monitor and observe the readings.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing
Feel free to fork this repository, make improvements, and submit pull requests. Suggestions for new features or bug fixes are welcome!

## P.S 
The updated version's README.md is in the updated version's versions File
