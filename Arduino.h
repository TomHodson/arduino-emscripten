#include <stdint.h>
#include <stdio.h>
#include <emscripten.h>
#include <emscripten/html5.h>

#define HIGH 1
#define LOW 0
#define LED_BUILTIN 13
#define OUTPUT 1
#define INPUT 0

void pinMode(uint8_t pin, uint8_t value) {}
void digitalWrite(uint8_t pin, uint8_t value) {
    if(pin == 13) {
    EM_ASM({
            document.getElementById("light_led").style.opacity = $0 ? 1 : 0;
    }, value);
}
}
void delay(uint32_t milliseconds) {
    emscripten_sleep(milliseconds);
}

class SerialClass {
    public:
    void begin(uint32_t baud) {}
    void println(const char string[]) {
        printf("%s\n", string);
    }
};

SerialClass Serial;

