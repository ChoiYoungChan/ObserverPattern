#include "pch.h"
#include "DigitalClock.h"

namespace Observer {
/**
*@file DigitalClock.cpp
*@brief Constructor
*@param clocktimer Put the ClockTimer which is declared in the main.cpp and equalize it.
*@author Choi Youngchan
*@date 2020-12-20
*/
DigitalClock::DigitalClock(ClockTimer& clocktimer) : subject(clocktimer)
{
	subject.Attach(*this);
}

/**
*@file DigitalClock.cpp
*@brief Destructor
*@author Choi Youngchan
*@date 2020-12-20
*/
DigitalClock::~DigitalClock()
{
	subject.Detach();
}

/**
*@file DigitalClock.cpp
*@brief Update function
*@param changedSubject 
*@author Choi Youngchan
*@date 2020-12-20
*/
void DigitalClock::Update(Subject& changedSubject)
{
	if (&changedSubject == &subject)
	{
		Draw();
	}
}

/**
*@file DigitalClock.cpp
*@brief Display now time
*@author Choi Youngchan
*@date 2020-12-20
*/
void DigitalClock::Draw()
{
	int hour = subject.GetHour();
	int minute = subject.GetMinute();
	int second = subject.GetSecond();

	std::cout << "Digital time is " << hour << ":"
			  << minute << ":"<< second << std::endl;
}
}