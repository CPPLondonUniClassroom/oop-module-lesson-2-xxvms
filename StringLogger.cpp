#include "StringLogger.h"


// This is for Part 2/3
   StringLogger::StringLogger(std::ostream& a) : stream{a}{}

    ILogger& StringLogger::LogInfo(const std::string &blah){
      stream << "INFO: " << blah;
      return *this;
    }

    ILogger& StringLogger::LogError(const std::string &blah) {
      stream << "ERROR: " << blah;
      lastError = blah;
      return *this;
    }

    const std::string& StringLogger::GetLastError() const{

      return lastError; }

