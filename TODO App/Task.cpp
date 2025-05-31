#include "Task.h"
#include <iostream>


// Constructor to initialize the task with a description and status
Task::Task(int taskId, const std::string& taskDescription): id(taskID), description(TaskDescription), isCompleted(false) {}

// Getter for Task ID
int Task::getId() const {
	return id;
}


// Getter for Task Description
std::string Task::getDescription() const {
	return description;
}

// Getter for completion status
bool Task::getCompletionStatus() const {
	return isCompleted;
}


// Set new description
void Task::setDescription(const std::string& newDescription) {
	description = newDescription;
}

// Mark task as complete 
void Task::markCompleted() {
	isCompleted = true;
}

// Mark task as incomplete
void Task::markIncomplete() {
	isCompleted = false;
}

// Print task info
void Task::display() const {
	std::cout << "[" << (isCompleted ? "✔" : "✘") << "] " << "(" << id << ") " << description << std::endl;
}




