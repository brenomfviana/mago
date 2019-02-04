/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#include "maze/maze.hpp"

Maze::Maze(size_t width, size_t height) {
  this->width = width;
  this->height = height;
  for (size_t row = 0; row < height; row++) {
   	for (size_t col = 0; col < width; col++) {
            this->cells[(row * width) + (col)] = Cell();
            this->cells[(row * width) + (col) + 1] = Cell();
            this->cells[(row * width) + (col) + 2] = Cell();
        }
    }
}
