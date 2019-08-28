#!/usr/bin/env python

"""
setup.py file for SWIG shape-circle class
"""

from distutils.core import setup, Extension


Circle_module = Extension('_Circle',
                           sources=['Circle_wrap.cxx', 'Shape.cpp', 'Circle.cpp'],
                           )

setup (name = 'Shape',
       version = '0.1',
       author      = "SWIG Docs",
       description = """Simple swig circle module""",
       ext_modules = [Circle_module],
       py_modules = ["Circle"],
       )