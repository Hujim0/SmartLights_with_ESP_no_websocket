#ifndef STATICMODE_H
#define STATICMODE_H

#include <Mode.h>

class StaticMode : public Mode
{
private:
    CRGB color;

public:
    void update(CRGB *);
    void setup(CRGB *);
    StaticMode();
    StaticMode(array<String, 10>);
    ~StaticMode();
};

#endif