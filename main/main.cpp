#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <M5Stack.h>
#include <Arduino.h>

void task(void *param) {
    int count = 0;
    while(1) {
        count++;
        //m5.Lcd.fillScreen(0);
        m5.Lcd.fillRect(0, 0, 320, 30, 0);
        m5.Lcd.setCursor(0, 0);
        m5.Lcd.printf("Count: %d", count);
        vTaskDelay(100/portTICK_RATE_MS);
    }
}

extern "C" void app_main() {
    initArduino();
    m5.begin();
    m5.Lcd.setTextSize(3);
    xTaskCreate(&task, "task", 4096, NULL, 5, NULL);
} 
