#pragma once
#include <vector>
#include "Task.h"
class Repo
{
public:
	Repo();
	std::vector<Task> tasks;
	void loadData();
	void sortVector();
};

