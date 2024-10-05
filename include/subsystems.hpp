#pragma once

#include "api.h"

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor Motor1 (7);
inline pros::Motor Motor2 (14);
inline pros::Motor extra_ring_motor (17);
inline pros::Optical optical (20);

inline ez::Piston Piston1 ('B');
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');