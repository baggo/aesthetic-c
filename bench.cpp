#include <iostream>
#include <chrono>
#include "aesthetic.hpp"

typedef std::chrono::high_resolution_clock Clock;

int main() {
  //Actual benchmark
  auto start = Clock::now();
  aesthetic("foo bar");
  auto end = Clock::now();

  //Pretty stuff
  std::cout << "Result:" << std::endl;
  std::cout << aesthetic("foo bar") << std::endl;
  std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " nanoseconds" << std::endl;
  return 0;
}
