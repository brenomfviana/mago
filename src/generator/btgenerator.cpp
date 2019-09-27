/*
  This file is part of MAGO.

  Copyright (c) 2019 by Breno Viana

  MAGO is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#include <cstdlib>
#include <ctime>
#include "generator/btgenerator.hpp"

Maze* BTGenerator::generate(size_t v, size_t h, Directions dv, Directions dh) {
  Maze* maze = new Maze(this->width, this->height);
  // Build the maze
  for (int i = 0; i < maze->get_height(); i++) {
    for (int j = 0; j < maze->get_width(); j++) {
      // Check vertical and horizontal bounds
      if (i == v && j == h) {
        continue;
      } else
        // Check vertical bound
        if (i == v) {
          maze->knock_down_a_wall(i, j, dh);
        } else
          // Check horizontal bound
          if (j == h) {
            maze->knock_down_a_wall(i, j, dv);
          } else {
            bool r = ((rand() % 2) == true);
            if (r && maze->is_wall_standing(i, j, dv)) {
              maze->knock_down_a_wall(i, j, dv);
            } else {
              maze->knock_down_a_wall(i, j, dh);
            }
          }
    }
  }
  return maze;
}

Maze* BTGenerator::generate() {
  // Init random seed
  srand(time(NULL));
  // Choose diagonal
  size_t d = (rand() % 4);
  switch (d) {
    case 0:
      // Northwest
      return generate(0, 0, NORTH, WEST);
      break;
    case 1:
      // Northeast
      return generate(0, (this->width - 1), NORTH, EAST);
      break;
    case 2:
      // Southwest
      return generate((this->height - 1), 0, SOUTH, WEST);
      break;
    case 3:
      // Southeast
      return generate((this->height - 1), (this->width - 1), SOUTH, EAST);
      break;
    default:
      return new Maze(width, height);
      break;
  }
}
