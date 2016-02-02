#include "Table.h"

using namespace std;

int main() {
  DataTable dataTable;
  
  std::string process;
  int milliseconds;
  dataTable.addToDataTable(process, milliseconds);
  dataTable.getDataTable();
  
  ProcessTable processTable;
  processTable.addFirstLineVector(dataTable.returnFirstLineCounterVector());
  processTable.getFirstLineVector();
  processTable.addStartTimeVector(dataTable.returnStartTimeCounterVector(dataTable.returnFirstLineCounterVector()));
  processTable.getStartTimeVector();
  
  return 0;
}

