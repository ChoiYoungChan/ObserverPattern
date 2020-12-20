#pragma once
#include <iostream>
#include <vector>

namespace Observer {

class Subject;
class Observer
{
public:
	virtual ~Observer() = default;
	virtual void Update(Subject& subject) = 0;
};

class Subject
{
public:
	virtual ~Subject() = default;
	void Attach(Observer& observer);
	void Detach();
	void Notify();
private:
	std::vector<Observer*> m_observer_vector;
};

class ClockTimer : public Subject
{
public:
	ClockTimer();
	~ClockTimer() = default;
	void SetTime(int hour, int minute, int second);

	int GetHour() const { return m_hour; }
	int GetMinute() const { return m_minute; }
	int GetSecond() const { return m_second; }

private:
	int m_hour;
	int m_minute;
	int m_second;
};
}