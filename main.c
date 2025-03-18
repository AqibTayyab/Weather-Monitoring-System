#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_READINGS 10  // Number of readings to simulate

// Structure to store weather data
typedef struct {
    float temperature;
    float humidity;
} WeatherData;

// Function to generate random weather data (simulating sensor readings)
WeatherData getSensorData() {
    WeatherData data;
    data.temperature = (rand() % 400) / 10.0 + 10; // Range: 10.0 - 50.0°C
    data.humidity = (rand() % 101); // Range: 0 - 100%
    return data;
}

// Function to calculate average values
void analyzeData(WeatherData data[], int size) {
    float tempSum = 0, humSum = 0;
    float minTemp = data[0].temperature, maxTemp = data[0].temperature;
    float minHum = data[0].humidity, maxHum = data[0].humidity;

    for (int i = 0; i < size; i++) {
        tempSum += data[i].temperature;
        humSum += data[i].humidity;

        if (data[i].temperature < minTemp) minTemp = data[i].temperature;
        if (data[i].temperature > maxTemp) maxTemp = data[i].temperature;
        if (data[i].humidity < minHum) minHum = data[i].humidity;
        if (data[i].humidity > maxHum) maxHum = data[i].humidity;
    }

    printf("\nWeather Analysis:\n");
    printf("Avg Temperature: %.2f°C | Min: %.2f°C | Max: %.2f°C\n", tempSum / size, minTemp, maxTemp);
    printf("Avg Humidity: %.2f%% | Min: %.2f%% | Max: %.2f%%\n", humSum / size, minHum, maxHum);
}

int main() {
    srand(time(0)); // Seed for random data

    WeatherData weatherReadings[MAX_READINGS];

    printf("Collecting Weather Data...\n");
    for (int i = 0; i < MAX_READINGS; i++) {
        weatherReadings[i] = getSensorData();
        printf("Reading %d -> Temperature: %.2f°C, Humidity: %.2f%%\n",
               i + 1, weatherReadings[i].temperature, weatherReadings[i].humidity);
    }

    analyzeData(weatherReadings, MAX_READINGS);

    return 0;
}
