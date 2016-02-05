#include "Table.h"

DataTable::DataTable() {
  std::vector<std::string> action;
  std::vector<int> time;
}

void DataTable::addToDataTable(std::string process, int milliseconds) {
  do {
    std::cin >> process;
    transform(process.begin(), process.end(), process.begin(), ::toupper);
    
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
      startTimeCounter.push_back(time[i]);
  
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

std::vector<int> DataTable::returnLastLineCounterVector() {
  std::vector<int> lastLineVector;
  
  for( int i = 0; i < action.size(); i++) {
    if( action[i] == "START" && i == 0 ) {
    }
    else if ( action[i] == "START" ) {
      lastLineVector.push_back( i - 1 );
    }
    else if ( i == ( action.size() - 1 ) ) {
      lastLineVector.push_back(i);
    }
  }
  return lastLineVector;
}
std::vector<std::string> DataTable::returnProcess() {
  std::vector <std::string> processes;
  processes = action;
  return processes;    
}

std::vector<int> DataTable::returnCompletionTime() {
  std::vector <int> completionTime;
  completionTime = time;
  return completionTime;
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

void ProcessTable::addStartTimeVector( std::vector<int> startTimeCount ) {
  startTime = startTimeCount;
}

void ProcessTable::addFirstLineVector( std::vector<int> firstLineCount ) {
  firstLine = firstLineCount;
}

void ProcessTable::addLastLineVector( std::vector<int> lastLineCount ){
  lastLine = lastLineCount;
}
void ProcessTable::getStartTimeVector() {
  for ( int i : startTime)
    std::cout << "The start time is at " << i << std::endl;
}

void ProcessTable::getFirstLineVector() {
  for(int i : firstLine)
    std::cout << "The start line is at " << i << std::endl;
}

void ProcessTable::getLastLineVector() {
  for(int i : lastLine)
    std::cout << "The last line is at " << i << std::endl;
}

void ProcessTable::currentLineCounter( std::vector<std::string> dataTableActions, std::vector<int> completionTimes ) {
  
    for (int j = 0; j < firstLine.size() ; j++ ){
      std::cout << firstLine[j] << std::endl;
      std::cout << dataTableActions[firstLine[j]] << std::endl;
      currentLine.push_back(dataTableActions[firstLine[j]] );
      ioCompletionTime.push_back(completionTimes[firstLine[j]] );
    }

      int timeTracker = 0;
      int lineTracker = 0;
      for(int j = 0; j < ioCompletionTime.size(); j++ ) {
        if( j + 1 < ioCompletionTime.size() )
          if( ioCompletionTime[j] < timeTracker) {
            timeTracker = ioCompletionTime[j];
            lineTracker = j;
          }
      std::cout << "Time tracking " << timeTracker << std::endl;
      std::cout << "Line tracking " << lineTracker << std::endl;
      }
}
