#!/usr/bin/env python

"""
setup.py file for SWIG Hello class
"""

from distutils.core import setup, Extension


Hello_module = Extension('_Hello',
                           sources=['Hello_wrap.cxx', 'Hello.cpp'],
                           )

setup (name = 'Hello',
       version = '0.1',
       author      = "SWIG Docs",
       description = """Simple swig Hello from docs""",
       ext_modules = [Hello_module],
       py_modules = ["Hello"],
       )