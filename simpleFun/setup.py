#!/usr/bin/env python

"""
setup.py file for SWIG simpleFun
"""

from distutils.core import setup, Extension


simpleFun_module = Extension('_simpleFun',
                           sources=['simpleFun_wrap.cxx', 'simpleFun.cpp'],
                           )

setup (name = 'simpleFun',
       version = '0.1',
       author      = "SWIG Docs",
       description = """Simple swig example from docs""",
       ext_modules = [simpleFun_module],
       py_modules = ["simpleFun"],
       )