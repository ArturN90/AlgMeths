CFLAGS = -g -O -c 
LIB1 = -lm  
LIB2 = "bib.hpp"

OBJ =\
    main.cpp \

all: main

clean:
	rm -f *.o qr
	rm -f *.o main

main: $(OBJ)
	$(CXX) $(OBJ) $(LIB1) $(LIB2) -o qr
