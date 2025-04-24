#ifndef SORTBYNAME_H
#define SORTBYNAME_H

#include "SortStrategy.h"
#include "Task.h"
#include <vector>
#include <algorithm>

class SortByName : public SortStrategy {
    public:
        void sort(std::vector<Task>& tasks) override {
            std::sort(tasks.begin(), tasks.end(), [](Task& a, Task& b) {
                return a.name < b.name;
            });
        }
};

#endif