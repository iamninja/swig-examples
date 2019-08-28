anotherClass
===
Description
----
Create a Python module from a C++ parent and subclass using swig.

How to create the library
----

Generate wrapper source files
```
swig -c++ -python Circle.i
```
Compile the Python module
```
python setup.py build_ext --inplace
```
Then you can import the generated module into Python
```
>>> import Circle
>>> c = Circle.Circle(3, 2, 5) # Circle(radius, x, y)
>>> c.get_radius()
3.0
>>> c.area()
28.274333882308138
>>> c.perimeter()
18.84955592153876
```
