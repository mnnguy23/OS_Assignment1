#include "IoRedirection.h"

IoRedirection::IoRedirection() {
  process_name = "";
  time = -1;
}

IoRedirection::IoRedirection(std::string process, int time):process_name(process) {
  time = time;
}

std::string IoRedirection::getProcessName() { return process_name; }

int IoRedirection::getTimeInMilliseconds() {return time; }

