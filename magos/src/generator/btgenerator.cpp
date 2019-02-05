/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#include <cstdlib>
#include <ctime>
#include "generator/btgenerator.hpp"

Maze* BTGenerator::generate() {
  Maze* maze = new Maze(this->width, this->height);
  // Init random seed
  srand(time(NULL));
  for (int i = (maze->get_height() - 1); i >= 0; i--) {
    for (int j = (maze->get_width() - 1); j >= 0; j--) {
      // Check if is first line
      if (i == 0 && j == 0){
        continue;
      } else if (i == 0) {
        maze->get_cell(i, j)->knock_down_left_wall();
        if (j > 0) {
          maze->get_cell(i, j - 1)->knock_down_right_wall();
        }
      } else if (j == 0) {
        maze->get_cell(i, j)->knock_down_top_wall();
        if (i > 0) {
          maze->get_cell(i - 1, j)->knock_down_bottom_wall();
        }
      } else {
        bool r = ((rand() % 2) == true);
        if ((r && maze->get_cell(i, j)->is_top_wall_standing()) ||
          (!r && !maze->get_cell(i, j)->is_left_wall_standing())) {
            maze->get_cell(i, j)->knock_down_top_wall();
            if (i > 0) {
              maze->get_cell(i - 1, j)->knock_down_bottom_wall();
            }
        } else {
          maze->get_cell(i, j)->knock_down_left_wall();
          if (j > 0) {
            maze->get_cell(i, j - 1)->knock_down_right_wall();
          }
        }
      }
    }
  }
  return maze;
}
