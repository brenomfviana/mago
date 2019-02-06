/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGOS_GENERATOR_HPP_
#define _MAGOS_GENERATOR_HPP_

#include "maze/maze.hpp"

/*!
 * \brief A interface for maze generators
 */
class Generator {
  protected:
    size_t width; ///< Maze width
    size_t height; ///< Maze height

  public:
    /*!
     * \brief Generator constructor
     *
     * \param width
     *     Maze width
     * \param height
     *     Maze height
     */
    Generator(size_t width, size_t height) {
      this->width = width;
      this->height = height;
    }

    /*!
     * \brief Perform maze generation and returns the generated maze
     *
     * \return
     *     The generated maze
     */
    virtual Maze* generate() = 0;
};

#include "btgenerator.hpp"

#endif /* _MAGOS_GENERATOR_HPP_ */
