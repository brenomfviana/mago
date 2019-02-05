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
  this->cells = new Cell*[this->height * this->width];
  for (size_t i = 0; i < this->height; i++) {
   	for (size_t j = 0; j < this->width; j++) {
      this->cells[(i * this->width) + j] = new Cell();
    }
  }
  this->sp = this->cells[0];
  this->ep = this->cells[(this->height * this->width - 1)];
}

Maze::~Maze() {
  for (size_t i = 0; i < this->height * this->width; i++) {
      delete [] this->cells[i];
  }
  delete [] this->cells;
}

size_t Maze::get_width() {
  return this->width;
}

size_t Maze::get_height() {
  return this->height;
}

Cell* Maze::get_cell(size_t i, size_t j) {
  return this->cells[(i * this->width) + j];
}

void Maze::knock_down_a_wall(size_t i, size_t j, Directions dir) {
  switch (dir) {
    case NORTH:
      get_cell(i, j)->knock_down_north_wall();
      if (i > 0) {
        get_cell(i - 1, j)->knock_down_south_wall();
      }
      break;
    case EAST:
      get_cell(i, j)->knock_down_east_wall();
      if (j  < (this->width - 1)) {
        get_cell(i, j + 1)->knock_down_west_wall();
      }
      break;
    case SOUTH:
      get_cell(i, j)->knock_down_south_wall();
      if (i < (this->height - 1)) {
        get_cell(i + 1, j)->knock_down_north_wall();
      }
      break;
    case WEST:
      get_cell(i, j)->knock_down_west_wall();
      if (j > 0) {
        get_cell(i, j - 1)->knock_down_east_wall();
      }
      break;
  }
}
