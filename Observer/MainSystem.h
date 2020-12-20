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
}