#include "Task.h"

Task::Task(std::string description, int duration, int priority) : description{description},duration{duration},priority{priority}
{
}

std::string Task::toString()
{
	return this->description+" "+std::to_string(duration) +" " +std::to_string(priority);
}

int Task::getPriority()
{
	return this->priority;
}

int Task::getDuration()
{
	return this->duration;
}
