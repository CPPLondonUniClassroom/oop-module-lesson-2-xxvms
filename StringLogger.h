
#ifndef OOP_LESSON2_STRINGLOGGER_H
#define OOP_LESSON2_STRINGLOGGER_H

#include <iostream>
#include "ILogger.h"
#include "EXERCISE.h"
// This is for Part 2/3


class StringLogger : public ILogger {

private:
    std::ostream& stream;
    std::string lastError{};

public :
    StringLogger(std::ostream& a);
    ILogger& LogInfo(const std::string &blah) override;
    ILogger& LogError(const std::string &blah) override;
    const std::string& GetLastError() const override;
};

#endif //OOP_LESSON2_STRINGLOGGER_H
