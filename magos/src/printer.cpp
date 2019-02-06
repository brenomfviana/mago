/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#include <iostream>
#include "printer.hpp"

void Printer::print(Maze* maze) {
  std::cout << "\n#";
  // Top wall
  for (size_t i = 0; i < maze->get_width(); i++) {
    std::cout << "##";
  }
  std::cout << "\n";
  for (size_t i = 0; i < maze->get_height(); i++) {
    // Mid
    for (size_t j = 0; j < maze->get_width(); j++) {
      // Left wall
      if (j == 0) {
        std::cout << "#";
      }
      if (maze->get_cell(i, j) == maze->sp) {
        std::cout << "S";
      } else if (maze->get_cell(i, j) == maze->ep) {
        std::cout << "E";
      } else {
        std::cout << " ";
      }
      if (maze->get_cell(i, j)->is_east_wall_standing()) {
        std::cout << "#";
      } else {
        std::cout << " ";
      }
    }
    std::cout << "\n";
    // Bottom
    for (size_t j = 0; j < maze->get_width(); j++) {
      if (j == 0) {
        std::cout << "#";
      }
      if (maze->get_cell(i, j)->is_south_wall_standing()) {
        std::cout << "##";
      } else  {
        std::cout << " #";
      }
    }
    std::cout << "\n";
  }
  std::cout << "\n";
}
