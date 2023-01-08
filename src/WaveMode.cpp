#include <WaveMode.h>

void WaveMode::setup(CRGB *)
{
}

void WaveMode::update(CRGB *)
{
    // for (int i = 0; i < NUMPIXELS; i++)
    // {
    //     leds[i] =
    // }
}

WaveMode::WaveMode(array<String, 10> args)
{
    speed = args[0].toFloat();
    length - args[1].toFloat();
}

WaveMode::~WaveMode()
{
    free(&offset);
}
