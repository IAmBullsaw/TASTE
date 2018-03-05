#include "taste.h"
#include <thread>
#include <iostream>

int main() {

  Inbox inbox{};

  Message msg{"Thread 1","Thread 1","Hello world!"};
  inbox.send(msg);

  for (auto msg: inbox.messages) {
    std::cout << msg.message << "\n";
  }

  return 0;
}
