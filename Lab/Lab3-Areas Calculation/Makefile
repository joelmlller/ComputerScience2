all: areaCalc.out







run: areaCalc.out

	./areaCalc.out







areaCalc.out: areaCalc.cpp Circle.cpp Rectangle.cpp Square.cpp Trapezoid.cpp

	g++ -Wall areaCalc.cpp Circle.cpp Rectangle.cpp Square.cpp Trapezoid.cpp -o areaCalc.out











clean:

	rm -f areaCalc.out
