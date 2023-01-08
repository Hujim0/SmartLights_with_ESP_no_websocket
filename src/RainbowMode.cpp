#include <RainbowMode.h>

void RainbowMode::setup(CRGB *) // no need for setup here
{
}

void RainbowMode::update(CRGB *leds)
{
    if (hue >= 255)
        hue = 0;

    for (int i = 0; i < NUMPIXELS; i++)
    {
        leds[i] = CHSV(hue + (i * hueConst), 255, 255);
    }
    hue += speed;

    // FastLED.showColor(CRGB::DarkCyan);
}

RainbowMode::RainbowMode()
{
    hue = 0;
    speed = 1;
    count = 1;
    reversed = false;

    hueConst = (255.0 * count) / (NUMPIXELS);
    if (!reversed) // should be the other way around but i like more when its reversed, so i will keep it a default
    {
        hueConst *= -1;
    }
}

RainbowMode::RainbowMode(array<String, 10> args)
{
    speed = args[0].toFloat();
    count = args[1].toInt();
    reversed = args[2].startsWith("reversed");

    hueConst = (255.0 * count) / (NUMPIXELS);
    if (!reversed)
    {
        hueConst *= -1;
    }
}
RainbowMode::~RainbowMode()
{
    free(&hue);
    free(&speed);
    free(&count);
    free(&hueConst);
    free(&reversed);
}
