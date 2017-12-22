CXX=g++


all:
	python setup.py build_ext --inplace

clean:
	rm -rf build rect.cpp rect.so rect.*.so lib

test:
	python python_test.py

clib:
	rm -rf lib
	mkdir lib
	${CXX}  -fPIC -shared  Rectangle.h Rectangle.cpp  -o ./lib/libRect.so
