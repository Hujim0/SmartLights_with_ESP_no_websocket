#include <StaticMode.h>
using std::strtol;

void StaticMode::setup(CRGB *)
{
}

void StaticMode::update(CRGB *leds)
{
    for (int i = 0; i < NUMPIXELS; i++)
    {
        leds[i] = color;
    }
}

StaticMode::StaticMode()
{
    color = CRGB::White;
}

StaticMode::StaticMode(array<String, 10> args)
{
    color = CRGB(args[0].toInt(),
                 args[1].toInt(),
                 args[2].toInt());
}
StaticMode::~StaticMode()
{
    free(&color);
}