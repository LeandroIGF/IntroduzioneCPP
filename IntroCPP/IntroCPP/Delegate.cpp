#include "Delegate.h"

Delegate::Delegate()
{

}

Delegate::~Delegate()
{

}

void Delegate::OverlapEvent()
{
	std::cout << "Overlap!" << std::endl;
	if (onOverlap) // Check if the delegate is bound
	{
		onOverlap(); // Call the delegate function
	}
}

void Delegate::SetOverlapEvent(std::function<void()> func)
{
	onOverlap = func;
}

void Delegate::MultipleOverlapEvents()
{
	for (const auto& func : subscribers)
	{
		// check if func is valid before calling then call it
		if (func)
		{
			func();
		}
	}
}
