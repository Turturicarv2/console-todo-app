#include "common.h"

ToDoList::ToDoList() : sorter(new SortByName()) {}

void ToDoList::addObserver(Observer* obs) {
    observers.push_back(obs);
}

void ToDoList::notify(const string& msg) {
    for (auto obs : observers) {
        obs->onTaskUpdated(msg);
    }
}

void ToDoList::addTask(const string& taskName) {
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
    cout << "\n--- To-Do List ---\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". [" << (tasks[i].completed ? "x" : " ") << "] " << tasks[i].name << endl;
    }
}