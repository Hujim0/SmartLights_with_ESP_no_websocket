#ifndef RAINBOWMODE_H
#define RAINBOWMODE_H

#include <Mode.h>

class RainbowMode : public Mode
{
private:
    float hue;
    bool reversed;
    float hueConst;

    float speed;
    int count;

public:
    void update(CRGB *);
    void setup(CRGB *);
    RainbowMode();
    RainbowMode(array<String, 10>);
    ~RainbowMode();
};

#endif