# cpp boost float128

Print to cout various float128 constants.

# Dependencies

* boost
* gcc

Only works with gcc not with clang
```
$ clang++ -O3 -std=gnu++11 boost_float128.cpp -I/c/modular-boost/libs/math/include -I/c/modular-boost -lquadmath -o boost_float128
In file included from boost_float128.cpp:1:
/usr/include/boost/multiprecision/float128.hpp:40:10: fatal error: 'quadmath.h' file not found
#include <quadmath.h>
         ^~~~~~~~~~~~
1 error generated.
make: *** [Makefile:2: boost_float128] Error 1
```

# Build and run
```
make
./boost_float128
```
# Clean
```
make clean
```
# Example
```
$ make && ./boost_float128
g++ -O3 -std=gnu++11 boost_float128.cpp -I/c/modular-boost/libs/math/include -I/c/modular-boost -lquadmath -o boost_float128
float128_true_min=   6.47518e-4966:0x00000000000000000000000000000001
float128_min     =    3.3621e-4932:0x00010000000000000000000000000000
float128_max     =   1.18973e+4932:0x7FFEFFFFFFFFFFFFFFFFFFFFFFFFFFFF
float128_epsilon =     1.92593e-34:0x3F8F0000000000000000000000000000
float128_toint   =      5.1923e+33:0x406F0000000000000000000000000000
```
