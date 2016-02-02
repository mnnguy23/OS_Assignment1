#ifndef Table_h
#define Table_h

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class DataTable {
  public:
    DataTable();
    void addToDataTable(std::string process, int milliseconds);
    std::vector<int> returnStartTimeCounterVector(std::vector<int> firstLineCount);
    std::vector<int> returnFirstLineCounterVector();
    void getDataTable();
       
  private:
    std::vector<std::string> action;
    std::vector<int> time;
};

class ProcessTable {
  public:
    ProcessTable();
    void addStartTimeVector (std::vector<int> startTimeCount);
    void addFirstLineVector (std::vector<int> firstLineCount);
    void addLastLineVector (int lastLineCount);
    void getStartTimeVector ();
    void getFirstLineVector ();
    
  private:
    std::vector<int> startTime;
    std::vector<int> firstLine;
    std::vector<int> lastLine;
};
#endif