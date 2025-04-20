#ifndef SORTBYSTATUS_H
#define SORTBYSTATUS_H

#include "common.h"

class SortByStatus : public SortStrategy {
    public:
        void sort(vector<Task>& tasks) override {
            std::sort(tasks.begin(), tasks.end(), [](Task& a, Task& b) {
                return a.completed < b.completed;
            });
        }
};

#endif