#include <ModeHandler.h>
#include <StaticMode.h>
#include <RainbowMode.h>

void ModeHandler::LedSwitch(bool state)
{
    if (led_state == state)
        return;

    led_state = state;

    if (!state)
    {
        FastLED.showColor(CRGB::Black);
    }
}

void ModeHandler::ChangeMode(int id, array<String, 10> args)
{
    switch (id)
    {
    case 0:
        current_mode = new StaticMode(args);
        return;

    case 1:
        current_mode = new RainbowMode(args);
        return;

    default:
        ChangeMode(0);
        return;
    }
}
void ModeHandler::ChangeMode(int id)
{
    switch (id)
    {
    case 0:
        current_mode = new StaticMode();
        return;
    case 1:
        current_mode = new RainbowMode();
        return;
    default:
        ChangeMode(0);
        break;
    }
}

void ModeHandler::setup(CRGB *leds)
{
    current_mode->setup(leds);
}

void ModeHandler::update(CRGB *leds)
{
    current_mode->update(leds);
}

ModeHandler::ModeHandler()
{
    ChangeMode(0);
    led_state = true;
}

ModeHandler::~ModeHandler()
{
    free(current_mode);
}