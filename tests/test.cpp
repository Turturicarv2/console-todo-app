// File: test_TodoList.cpp

#include <cassert>
#include <iostream>
#include "../src/ToDoList.h"
#include "../src/Task.h"

void addTask_NewTaskProvided_TaskIsAddedToList() {
    ToDoList todo;
    todo.addTask("Buy milk");

    const std::vector<Task>& tasks = todo.getTasks(); // You'll need to add this method.

    assert(tasks.size() == 1);
    assert(tasks[0].name == "Buy milk");
    assert(tasks[0].completed == false);
}

void completeTask_ValidIndex_TaskIsMarkedCompleted() {
    // Arrange
    ToDoList todo;
    todo.addTask("Buy milk");

    // Act
    todo.completeTask(0);

    // Assert
    const std::vector<Task>& tasks = todo.getTasks();
    assert(tasks.size() == 1);
    assert(tasks[0].completed == true);
}

int main() {
    addTask_NewTaskProvided_TaskIsAddedToList();
    completeTask_ValidIndex_TaskIsMarkedCompleted();
    std::cout << "All tests passed!\n";
    return 0;
}
