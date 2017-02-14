# CMake
cmake_minimum_required(VERSION 3.6)
project("Aesthetic Benchmarking")

# Libraries
include_directories(
  ${PROJECT_SOURCE_DIR}/benchmark/include/benchmark # Google Benchmark
)

# Executable
add_executable(out
  bench/main.cpp
)
