#pragma once // this ensures that this file is included only once during compilation

#include <string>

class Task {
private:
	int id;
	std::string desription;
	bool isDone;
public:
	// Constructor to initialize a Task with an ID and description
	Task(int taskId, const std::string taskDescription);

	
	// Getters
	int getId() const; // const at the end indicates that this method does not change anything in the function
	std::string getDescription() const; 
	bool getCompletionStatus() const;


	// Setters
	void setDescription(const std::string& newDescription);
	void markCompleted();
	void markIncomplete();

	// Method to display the task details
	void display() const;	
};

