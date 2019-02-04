/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#include "maze/cell.hpp"

Cell::Cell() {
  this->top = true;
  this->right = true;
  this->bottom = true;
  this->left = true;
}

bool Cell::is_top_wall_standing() {
  return this->top;
}

bool Cell::is_right_wall_standing() {
  return this->right;
}

bool Cell::is_bottom_wall_standing() {
  return this->bottom;
}

bool Cell::is_left_wall_standing() {
  return this->left;
}

void Cell::knock_down_top_wall() {
  this->top = false;
}

void Cell::knock_down_right_wall() {
  this->right = false;
}

void Cell::knock_down_bottom_wall() {
  this->bottom = false;
}

void Cell::knock_down_left_wall() {
  this->left = false;
}
