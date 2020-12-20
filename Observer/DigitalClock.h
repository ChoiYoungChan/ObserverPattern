#pragma once
#include "MainSystem.h"

namespace Observer {
	class DigitalClock : public Observer
	{
	public:
		DigitalClock(ClockTimer& clocktimer);
		~DigitalClock();
		void Update(Subject& changedSubject) override;
		void Draw();
	private:
		ClockTimer& subject;
	};
}