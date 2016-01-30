#ifndef IoRedirection_h
#define IoRedirection_h

#include <string>
#include <iostream>

class IoRedirection {
  public:

    IoRedirection();

    IoRedirection(std::string process, int time);

    std::string getProcessName();

    int getTimeInMilliseconds();

  private:

    std::string process_name;
    int time;
};
#endif
