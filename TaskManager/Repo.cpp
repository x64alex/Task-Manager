#include "Repo.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>

using namespace std;

Repo::Repo()
{
}

void Repo::loadData()
{
	ifstream f("1.txt");
	string text;
	while (getline(f, text)) {
		stringstream s(text);
		string d;
		int dur, priority;
		s >> d;
		s >> dur;
		s >> priority;
		Task t{ d,dur,priority };
		this->tasks.push_back(t);
	}
}

bool compare(Task v1,Task v2) {
	if (v1.getPriority() > v2.getPriority()) {
		return false;
	}
	else if (v1.getPriority() == v2.getPriority() && v1.getDuration() > v2.getDuration())
	{
		return false;
	}
	return true;
}

void Repo::sortVector()
{
	sort(this->tasks.begin(), this->tasks.end(), compare);
}
