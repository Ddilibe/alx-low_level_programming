# Dynamic Libraries


### Creating a c function to used in python
Follow the following steps to create a function to be used in python. 
- First, Create your c function
```
#include <stdio.h>

/**
  * add - Function to add two variables
  * @a: variable A
  * @b: variable B
  *
  * Return: the sum of variable A and B
  */

int add(int a, int b)
{
	return (a + b);
}
```
- Complile and convert the above function in to a dynamic library

`gcc -fPIC -shared -o libholberton.so c_cuntion.c`

- Open a python file in the same directory as the recently created ynamic library and copy what you see below
```
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
```
- Save the file and run it. 

You have successfully created a c function that can run in a python program.
