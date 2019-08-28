simpleClass
===
Description
----
Create a Python module from a C++ class using swig.

How to create the library
----

Generate wrapper source files
```
swig -c++ -python Hello.i
```
Compile the Python module
```
python setup.py build_ext --inplace
```
Then you can import the generated module into Python
```python
>>> import Hello
>>> hi = Hello.Hello()
>>> hi.sayHello()
# Hello there!
```
