#include "hello-greet.h"
#include <ctime>
#include <iostream>
#include <string>

// main.cpp
#include <print>

auto main() -> int {
  std::println("hi world");
  return 0;
}

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}
