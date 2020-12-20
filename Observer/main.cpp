#include "pch.h"
#include <iostream>
#include "MainSystem.h"
#include "AnalogClock.h"
#include "DigitalClock.h"

int main()
{
	Observer::ClockTimer timer;
	Observer::DigitalClock digitalClock(timer);
	Observer::AnalogClock analogClock(timer);

	timer.SetTime(19, 01, 0);
}