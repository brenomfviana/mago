/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGOS_MAZE_HPP_
#define _MAGOS_MAZE_HPP_

#include <iostream>

class Maze {
  private:
    size_t width; ///< Maze width
    size_t height; ///< Maze height

  public:
    Maze(size_t width, size_t height);
};

#endif /* _MAGOS_MAZE_HPP_ */
