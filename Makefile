boost_float128: boost_float128.cpp
	g++ -O3 -std=gnu++11 boost_float128.cpp -I/c/modular-boost/libs/math/include -I/c/modular-boost -lquadmath -o boost_float128

clean:
	rm -rf boost_float128
