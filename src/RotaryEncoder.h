#pragma once 

class Button;
class Encoder;

class RotaryEncoder
{
  private:
    Encoder *encoder;
    int lastLedState;
    unsigned long lastFlash;
    int ledState;
    float sinValue;
    unsigned long lastFade;
    bool ledON = false;
    
  public:
    RotaryEncoder();
    bool wasTurnedLeft();
    bool wasTurnedRight();
    int Value();
    bool checkstop();
    bool button1State();
    bool button2State();
    bool RUN_BTN_STATE(bool toggle, bool running);
    float encValue;
    bool action();
    void ledOff();
    void ledOn();
    void ledFade();
    void ledFlash(bool whatButton, bool secondaryOff);
    void ledReset();
};