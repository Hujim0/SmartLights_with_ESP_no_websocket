#ifndef MODE_H
#define MODE_H

#include <FastLED.h>
#include <main.h>
using std::array;

class Mode
{
public:
    // pure virtual methods
    virtual void setup(CRGB *) = 0;
    virtual void update(CRGB *) = 0;
    virtual ~Mode() {}
};

#endif