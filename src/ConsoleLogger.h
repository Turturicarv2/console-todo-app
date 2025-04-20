#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include "common.h"

class ConsoleLogger : public Observer {
    public:
        void onTaskUpdated(const string& msg) override {
            cout << "[LOG]: " << msg << endl;
        }
};    

#endif