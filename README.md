# Weather Monitoring System

## Overview
This Weather Monitoring System collects and analyzes **temperature and humidity** data using C programming. The system simulates sensor readings, processes data, and provides insights like **minimum, maximum, and average values**.

## Features
- Simulated **temperature and humidity** sensor readings
- Computes **min, max, and average** values
- Displays real-time **weather data analysis**
- Simple **C implementation** (no external dependencies)

## Prerequisites
Before running the program, ensure you have:
- **C Compiler** (GCC or Clang)
- **Terminal or Command Prompt**

## Installation & Usage

### 1. Clone the Repository
```sh
git clone https://github.com/AqibTayyab/Weather-Monitoring-System.git
cd Weather-Monitoring-System
```

### 2. Compile the Program
Using **GCC** (Linux/macOS/Windows with MinGW):
```sh
gcc main.c -o main
```

### 3. Run the Program
```sh
./main
```

### 4. Example Output
```
Collecting Weather Data...
Reading 1 -> Temperature: 25.40°C, Humidity: 60.00%
Reading 2 -> Temperature: 30.25°C, Humidity: 55.00%
...
Weather Analysis:
Avg Temperature: 27.80°C | Min: 24.00°C | Max: 32.50°C
Avg Humidity: 58.50% | Min: 45.00% | Max: 70.00%
```

## Code Explanation
- **Structure (`WeatherData`)**: Holds temperature and humidity values.
- **Random Data Generation (`getSensorData()`)**: Simulates sensor readings.
- **Analysis (`analyzeData()`)**: Calculates min, max, and average values.
- **Main Function (`main()`)**: Collects and processes data.

## Future Enhancements
- **Real Sensor Integration** (e.g., DHT11/DHT22 with microcontrollers)
- **File Logging** (Saving readings to CSV files)
- **Live Monitoring** (Continuous data collection)
- **Graphical Output** (Using `gnuplot` or a GUI)

## Contributing
Contributions are welcome! Feel free to fork, submit pull requests, or report issues.

## License
This project is licensed under the **MIT License**.

---
**Author:** AqibTayyab
GitHub: https://github.com/AqibTayyab

