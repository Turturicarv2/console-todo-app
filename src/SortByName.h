#ifndef SORTBYNAME_H
#define SORTBYNAME_H

#include "common.h"

class SortByName : public SortStrategy {
    public:
        void sort(vector<Task>& tasks) override {
            std::sort(tasks.begin(), tasks.end(), [](Task& a, Task& b) {
                return a.name < b.name;
            });
        }
};

#endif