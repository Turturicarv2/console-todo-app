#include "ToDoList.h"
#include "ConsoleLogger.h"
#include <string>
#include <iostream>

// --------- Main Function ---------
int main() {
    ToDoList todo;
    ConsoleLogger logger;
    todo.addObserver(&logger);

    int choice;
    std::string name;
    int index;

    while (true) {
        std::cout << "\n1. Add Task\n2. Complete Task\n3. Show Tasks\n4. Sort by Name\n5. Sort by Status\n0. Exit\n> ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter task name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                todo.addTask(name);
                break;
            case 2:
                std::cout << "Enter task number to complete: ";
                std::cin >> index;
                todo.completeTask(index - 1);
                break;
            case 3:
                todo.showTasks();
                break;
            case 4:
                todo.setSortStrategy(new SortByName());
                break;
            case 5:
                todo.setSortStrategy(new SortByStatus());
                break;
            case 0:
                return 0;
            default:
                std::cout << "Invalid option.\n";
        }
    }

    return 0;
}
