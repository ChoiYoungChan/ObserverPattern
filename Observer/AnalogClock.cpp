#include "pch.h"
#include "AnalogClock.h"

namespace Observer {
/**
*@file AnalogClock.cpp
*@brief Constructor
*@param clocktimer Put the ClockTimer which is declared in the main.cpp and equalize it.
*@author Choi Youngchan
*@date 2020-12-20
*/
AnalogClock::AnalogClock(ClockTimer& clocktimer) : subject(clocktimer)
{
	subject.Attach(*this);
}

/**
*@file AnalogClock.cpp
*@brief Destructor
*@author Choi Youngchan
*@date 2020-12-20
*/
AnalogClock::~AnalogClock()
{
	subject.Detach();
}

/**
*@file AnalogClock.cpp
*@brief Update function
*@param changedSubject
*@author Choi Youngchan
*@date 2020-12-20
*/
void AnalogClock::Update(Subject& changedSubject)
{
	if (&changedSubject == &subject)
	{
		Draw();
	}
}

/**
*@file AnalogClock.cpp
*@brief Display now time
*@author Choi Youngchan
*@date 2020-12-20
*/
void AnalogClock::Draw()
{
	int hour = subject.GetHour();
	int minute = subject.GetMinute();
	int second = subject.GetSecond();

	std::cout << "Digital time is " << hour << ":"
	          << minute << ":" << second << std::endl;
}
}