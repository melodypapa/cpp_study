[TOC]

# C++ Study notes

Create the repository for C++ and write down the notes

## C++20

### Install gcc on Mac

```
sudo port install gcc10
```

```
port select gcc

Available versions for gcc:
  mp-gcc10
  mp-gcc9 (active)
  none

sudo port select gcc mp-gcc10

Selecting 'mp-gcc10' for 'gcc' succeeded. 'mp-gcc10' is now active.
```


## Include vs. import

One of the biggest new feature of C++ 20 is support for module. it will replace the old mechanism of include header files.

### Include

``` c++ {.line-numbers}
include <iostream>
```

### Import

``` c++ {.line-numbers}
import <iostream>;
```