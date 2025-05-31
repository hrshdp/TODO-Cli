#pragma once

#include "Task.h"
#include <vector>
#include <string>

class TaskManager {
private:
	std::vector<Task> tasks; // list of all tasks
	int nextId; // auto increase ID for every new task

public: 
	TaskManager(); // null constructor

	// Core features
	void addTask(const std::string& description);
	bool removeTask(int id);
	void listTasks() const;
	bool markTaskCompleted(int id);
	bool markTaskIncomplete(int id);
	bool updateTaskDescription(int id, const std::string& newDescription);

};