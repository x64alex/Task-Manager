#pragma once
#include <string>
class Task
{
private:
	std::string description;
	int duration, priority;

public:
	Task(std::string description, int duration, int priority);
	std::string toString();
	int getPriority();
	int getDuration();
};

