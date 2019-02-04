/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGOS_MAZE_HPP_
#define _MAGOS_MAZE_HPP_

#include <iostream>
#include "cell.hpp"

/*!
 * \brief Maze class
 */
class Maze {
  private:
    size_t width; ///< Maze width
    size_t height; ///< Maze height

  public:
    Cell* cells; ///< Maze cells

    /*!
     * \brief Maze constructor
     */
    Maze(size_t width, size_t height);

    size_t get_width() {
      return this->width;
    }

    size_t get_height() {
      return this->height;
    }
};

#endif /* _MAGOS_MAZE_HPP_ */
