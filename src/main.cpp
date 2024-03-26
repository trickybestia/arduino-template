#include <Arduino.h>

#ifdef DEBUG
#include <avr8-stub.h>
#endif

const int PIN_LED = LED_BUILTIN;

int main() {
  init();

#ifdef DEBUG
  debug_init();
#endif

  pinMode(PIN_LED, OUTPUT);

  while (true) {
    digitalWrite(PIN_LED, !digitalRead(PIN_LED));

    delay(500);
  }
}
