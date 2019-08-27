anotherClass
===
Description
----
Create a Python module from a C++ class using swig.
Here we will not wrap all the class' methods.

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
```
>>> import Hello
>>> hi = Hello.Hello("This is a greeting traveller!")
>>> hi.sayHello()
AttributeError: 'Hello' object has no attribute 'sayHello'
>>> hi.greeting()
Hello there!
This is a greeting traveller!
>>> hi.setMessage("You've been greeted enough...")
>>> hi.getMessage()
'You've been greeted enough...'
```
