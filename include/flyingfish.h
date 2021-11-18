#ifndef _FLYINGFISH_H
#define _FLYINGFISH_H

#include <iostream>
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

py::array_t<float> multiply_by_two(py::array_t<float, py::array::c_style | py::array::forcecast>&);

#endif
