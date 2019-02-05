/*
  This file is part of MAGOS.

  Copyright (c) 2019 by Breno Viana

  MAGOS is a free software; you can redistribute it and/or modify it under the
  terms of the MIT License.
*/

#ifndef _MAGOS_BTGENERATOR_HPP_
#define _MAGOS_BTGENERATOR_HPP_

#include "generator/generator.hpp"

/*!
 * \brief BTGenerator implements the Binary Tree Algorithm
 */
class BTGenerator : public Generator {
  public:
    /*!
     * \brief Generator constructor
     *
     * \param width
     *     Maze width
     * \param height
     *     Maze height
     */
    BTGenerator(size_t width, size_t height)
      : Generator(width, height) { /* empty */ }

    Maze* generate();
};

#endif /* _MAGOS_BTGENERATOR_HPP_ */
