#ifndef SORTBYSTATUS_H
#define SORTBYSTATUS_H

#include "SortStrategy.h"
#include "Task.h"
#include <vector>
#include <algorithm>

class SortByStatus : public SortStrategy {
    public:
        void sort(std::vector<Task>& tasks) override {
            std::sort(tasks.begin(), tasks.end(), [](Task& a, Task& b) {
                return a.completed < b.completed;
            });
        }
};

#endif