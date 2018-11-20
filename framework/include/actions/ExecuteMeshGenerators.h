//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#ifndef EXECUTEMESHGENERATORS_H
#define EXECUTEMESHGENERATORS_H

#include "Action.h"

class ExecuteMeshGenerators;

template <>
InputParameters validParams<ExecuteMeshGenerators>();

class ExecuteMeshGenerators : public Action
{
public:
  ExecuteMeshGenerators(InputParameters params);

  virtual void act() override;
};

#endif // EXECUTEMESHGENERATORS_H