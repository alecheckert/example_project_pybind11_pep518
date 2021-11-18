from setuptools import setup
from pybind11.setup_helpers import Pybind11Extension, build_ext

ext_modules = [Pybind11Extension(
    "_flyingfish",
    ["src/multiply_by_two.cpp", "src/module.cpp"],
    include_dirs=["include"],
)]

setup(
    name="flyingfish",
    version="1.0",
    ext_modules=ext_modules,
    cmdclass={"build_ext": build_ext},
    packages=["flyingfish"],
)
