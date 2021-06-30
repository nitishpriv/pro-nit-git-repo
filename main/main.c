#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "driver/gpio.h"
int a[]={1, 4, 6, 8};
#define BLINK_GPIO 2
int n;
void app_main(void)
{
    gpio_set_direction(BLINK_GPIO,GPIO_MODE_OUTPUT);
    while(1)
    {
         printf("Hii Nirmal Thankyou for your cooperation\n");
         for(int i=0;i<4;i++)
         {
             printf("%d\n",a[i]);
             vTaskDelay(100/portTICK_PERIOD_MS);
         }
         gpio_set_level(BLINK_GPIO,1);
         vTaskDelay(1000/portTICK_PERIOD_MS);
         gpio_set_level(BLINK_GPIO,0);
         vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}
