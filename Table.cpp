#include "Table.h"

DataTable::DataTable() {
  std::vector<std::string> action;
  std::vector<int> time;
}

void DataTable::addToDataTable(std::string process, int milliseconds) {
  do {
    std::cin >> process;
    if(process == "END"){
    } else {
      std::cin >> milliseconds;
      
      action.push_back(process);
      time.push_back(milliseconds);
    }
  } while(!std::cin.eof());
  
}
std::vector<int> DataTable::returnStartTimeCounterVector(std::vector<int> firstLineCount) {
  std::vector<int> startTimeCounter;
  for ( int i : firstLineCount)
    for ( int j : time)
      startTimeCounter.push_back(time[firstLineCount[i]]);
  
  return startTimeCounter;
}

std::vector<int> DataTable::returnFirstLineCounterVector() {
  std::vector<int> firstLineVector;
  
  for( int i = 0; i != action.size(); i++) {
    if(action[i] == "START")
      firstLineVector.push_back(i);
  }
  return firstLineVector;
}
void DataTable::getDataTable() {
  if (action.size() == time.size())
  for( int i = 0; i != action.size(); i++)
  {
    std::cout << action[i] << " " << time[i] << std::endl;
  }
}

ProcessTable::ProcessTable() {
  std::vector<int> startTime;
  std::vector<int> firstLine;
  std::vector<int> lastLine; 
}

void ProcessTable::addStartTimeVector(std::vector<int> startTimeCount) {
  startTimeCount = startTimeCount;
}

void ProcessTable::addFirstLineVector(std::vector<int> firstLineCount) {
  firstLine = firstLineCount;
}

void ProcessTable::getStartTimeVector() {
  for ( int i : startTime)
    std::cout << "The start time is at " << i << std::endl;
}

void ProcessTable::getFirstLineVector() {
  for(int i : firstLine)
    std::cout << "The start line is at " << i << std::endl;    
}