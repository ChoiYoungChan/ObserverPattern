#pragma once
#include "MainSystem.h"

namespace Observer {
class AnalogClock : public Observer
{
public:
	AnalogClock(ClockTimer& clocktimer);
	~AnalogClock();
	void Update(Subject& changedSubject) override;
	void Draw();
private:
	ClockTimer& subject;
};
}