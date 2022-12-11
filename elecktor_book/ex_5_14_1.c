#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define LED_OFF (176)
#define LED_ON  (219)

void delay_and_toggle_led(int led_one, int led_two);

int main(void)
{
  while (!kbhit())
  {
    delay_and_toggle_led(LED_OFF, LED_ON);
    delay_and_toggle_led(LED_ON, LED_OFF);
  }
}

void delay_and_toggle_led(int led_one, int led_two)
{
  Sleep(500);
  printf("\r%c %c", led_one, led_two);
}