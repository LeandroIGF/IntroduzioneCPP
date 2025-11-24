#pragma once
#include <functional>
#include <string>
#include <iostream>
#include <vector>

class Delegate
{
public:
	Delegate();
	~Delegate();

	// single binding delegate examples
	std::function<void(const std::string&)> onEventTriggered;

	std::function<int(const float, const int, const std::string)> onCalculateValue;

	std::function<void()> onOverlap;

	// multiple binding delegate example
	std::vector<std::function<void()>> subscribers;

	void OverlapEvent();

	void SetOverlapEvent(std::function<void()> func);

	// call all subscribed functions
	void MultipleOverlapEvents();
	
	// inline example, quasi non piu' usato
	//inline void ClearSubscribers() { subscribers.clear(); }

};