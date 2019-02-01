/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#include <chrono>
#include <iostream>
#include <sstream>
#include "maze/maze.hpp"

/*!
 * \brief Validade arguments and get maze dimensions
 */
bool check_args(int argc, char* argv[], size_t& width, size_t& height) {
  // Check argument count
  if (argc < 3) {
    std::cout << "MAGOS: Please specify maze dimensions!\n";
    return false;
  }
  // Get maze dimensions
  try {
    width = std::stoi(argv[1]);
    height = std::stoi(argv[2]);
  } catch (const std::invalid_argument& e) {
    std::cout << "MAGOS: Invalid maze size value!\n";
    return false;
  }
  // Check if the dimensions are greater than zero
  if (width <= 2 || height <= 2) {
    std::cout << "MAGOS: The dimensions must be greater than two!\n";
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  // Maze dimensions
  size_t width = 0, height = 0;
  // Check argurments
  if (!check_args(argc, argv, width, height)) {
    exit(1);
  }
  // Welcome message
  Maze maze(width, height);
  // End
  return EXIT_SUCCESS;
}
