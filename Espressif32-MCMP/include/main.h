#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_mac.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "driver/gpio.h"

#include "lwip/err.h"
#include "lwip/sys.h"

#define EXAMPLE_ESP_WIFI_SSID      "mywifissid"
#define EXAMPLE_ESP_WIFI_PASS      "mywifipass"
#define EXAMPLE_ESP_WIFI_CHANNEL   1
#define BLINK_GPIO                 2 
#define EXAMPLE_MAX_STA_CONN       4