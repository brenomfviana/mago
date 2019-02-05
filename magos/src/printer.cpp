/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#include <iostream>
#include "printer.hpp"

void Printer::print(Maze* maze) {
  std::cout << "\n";
  for (size_t i = 0; i < maze->get_width(); i++) {
    // Top
    for (size_t j = 0; j < maze->get_height(); j++) {
      if (maze->get_cell(i, j)->is_top_wall_standing()) {
        std::cout << "###";
      } else  {
        std::cout << "# #";
      }
    }
    std::cout << "\n";
    // Mid
    for (size_t j = 0; j < maze->get_height(); j++) {
      if (maze->get_cell(i, j)->is_left_wall_standing()) {
        std::cout << "# ";
      } else {
        std::cout << "  ";
      }
      if (maze->get_cell(i, j)->is_right_wall_standing()) {
        std::cout << "#";
      } else {
        std::cout << " ";
      }
    }
    std::cout << "\n";
    // Bottom
    for (size_t j = 0; j < maze->get_height(); j++) {
      if (maze->get_cell(i, j)->is_bottom_wall_standing()) {
        std::cout << "###";
      } else  {
        std::cout << "# #";
      }
    }
    std::cout << "\n";
  }
  std::cout << "\n";
}
