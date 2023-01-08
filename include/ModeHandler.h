#ifndef MODEHANDLER_H
#define MODEHANDLER_H

#include <Mode.h>

class ModeHandler
{
private:
    Mode *current_mode;

public:
    bool led_state;
    void LedSwitch(bool);
    void ChangeMode(int, array<String, 10>);
    void ChangeMode(int);
    void setup(CRGB *);
    void update(CRGB *);
    ModeHandler();
    ~ModeHandler();
};

#endif