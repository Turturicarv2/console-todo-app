#include "ToDoList.h"
#include <iostream>

ToDoList::ToDoList() : sorter(new SortByName()) {}

void ToDoList::addObserver(Observer* obs) {
    observers.push_back(obs);
}

void ToDoList::notify(const std::string& msg) {
    for (auto obs : observers) {
        obs->onTaskUpdated(msg);
    }
}

void ToDoList::addTask(const std::string& taskName) {
    tasks.push_back(Task(taskName));
    notify("Task added: " + taskName);
}

void ToDoList::completeTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        notify("Task completed: " + tasks[index].name);
    }
}

void ToDoList::setSortStrategy(SortStrategy* newSorter) {
    sorter = newSorter;
    notify("Sort strategy changed.");
}

void ToDoList::showTasks() {
    sorter->sort(tasks);
    std::cout << "\n--- To-Do List ---\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        std::cout << i + 1 << ". [" << (tasks[i].completed ? "x" : " ") << "] " << tasks[i].name << std::endl;
    }
}