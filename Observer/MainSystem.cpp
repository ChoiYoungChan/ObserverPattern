#include "pch.h"
#include "MainSystem.h"

namespace Observer {

/**
*@file MainSystem.cpp
*@brief Method Attach
*@param observer put in Observer Class as a parametor
*@author Choi Youngchan
*@date 2020-12-20
*/
void Subject::Attach(Observer& observer)
{
	m_observer_vector.push_back(&observer);
}

/**
*@file MainSystem.cpp
*@brief Method Detach
*@detail detach(remove)Observer from m_observer_vector
*@author Choi Youngchan
*@date 2020-12-20
*/
void Subject::Detach()
{
	m_observer_vector.erase(m_observer_vector.begin(), m_observer_vector.end());
}

/**
*@file Subject.cpp
*@brief Method Notify
*@author Choi Youngchan
*@date 2020-12-20
*/
void Subject::Notify()
{
	for (auto* observer : m_observer_vector)
	{
		observer->Update(*this);
	}
}

/**
*@file ClockTimer.cpp
*@brief Constructor
*@author Choi Youngchan
*@date 2020-12-20
*/
ClockTimer::ClockTimer()
{
	m_hour = 0;
	m_minute = 0;
	m_second = 0;
}

/**
*@file ClockTimer.cpp
*@brief SetTime
*@param hour set now Hour
*@param minute set now minute
*@param second set now second
*@author Choi Youngchan
*@date 2020-12-20
*/
void ClockTimer::SetTime(int hour, int minute, int second)
{
	m_hour = hour;
	m_minute = minute;
	m_second = second;

	Notify();
}
}