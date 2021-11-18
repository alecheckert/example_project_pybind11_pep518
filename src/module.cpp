#include <flyingfish.h>

PYBIND11_MODULE(_flyingfish, m) {
    m.def("multiply_by_two", &multiply_by_two);
}
