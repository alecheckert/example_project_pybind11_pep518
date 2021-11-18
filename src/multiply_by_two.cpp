#include <flyingfish.h>

py::array_t<float> multiply_by_two(
    py::array_t<float, py::array::c_style | py::array::forcecast>& arr
) {
    py::buffer_info buf = arr.request();
    if (buf.ndim != 1) {
        throw std::runtime_error("array must be 1-dimensional");
    }
    std::size_t size = static_cast<std::size_t>(buf.shape[0]);
    float* ptr = arr.mutable_data(0);
    for (std::size_t i = 0; i < size; i++) 
        *(ptr+i) *= 2;

    return arr;
}
