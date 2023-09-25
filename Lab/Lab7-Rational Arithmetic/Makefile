CC = g++



CFLAGS = -Wall



PROGRAM = main.out





all: $(PROGRAM)







run: $(PROGRAM)



	./$(PROGRAM)







$(PROGRAM): main.cpp Rational.cpp



	$(CC) $(CFLAGS) main.cpp Rational.cpp -o $(PROGRAM)





clean:



	rm *.out
