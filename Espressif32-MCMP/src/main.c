#include "main.h"

//Teste para ligar e desligar o LED do ESP32

void blink_task(void *pvParameter) {
    gpio_pad_select_gpio(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
    //Loop para ligar e desligar o LED infinitamente
    while (1) {
        gpio_set_level(BLINK_GPIO, 1);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        gpio_set_level(BLINK_GPIO, 0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

//Na função app_main, está a tarefa para fazer o LED piscar
void app_main() {
    xTaskCreate(&blink_task, "blink_task", configMINIMAL_STACK_SIZE, NULL, 5, NULL);
}