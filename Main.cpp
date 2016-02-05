#include "Table.h"

using namespace std;

int main() {
  DataTable dataTable;
  ProcessTable processTable;
  std::string process;
  int milliseconds;
  
  dataTable.addToDataTable( process, milliseconds );
  dataTable.returnLastLineCounterVector();
  dataTable.getDataTable();
  
  processTable.addStartTimeVector( dataTable.returnStartTimeCounterVector( dataTable.returnFirstLineCounterVector() ) );
  processTable.getStartTimeVector();
  
  processTable.addFirstLineVector( dataTable.returnFirstLineCounterVector() );
  processTable.getFirstLineVector();
  
  processTable.addLastLineVector( dataTable.returnLastLineCounterVector() );
  processTable.getLastLineVector();
  
  processTable.currentLineCounter( dataTable.returnProcess(), dataTable.returnCompletionTime() );
  return 0;
}

