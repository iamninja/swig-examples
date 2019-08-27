How to create the library
----

Generate wrapper source files
```
swig -c++ -python simpleFun.i
```
Compile the Python module
```
python setup.py build_ext --inplace
```
Then you can import the generated module into Python
```
>>> import simpleFun
>>> simpleFun.plusAnswer(1)
43
```


