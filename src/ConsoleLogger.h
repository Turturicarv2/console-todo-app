#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include "Observer.h"
#include <string>
#include <iostream>

class ConsoleLogger : public Observer {
    public:
        void onTaskUpdated(const std::string& msg) override {
            std::cout << "[LOG]: " << msg << std::endl;
        }
};    

#endif