CXX:= g++
CFLAGS :=
LIBS := Simplex.o
PROG := add

all: $(PROG)

add: add.o $(LIBS)
	$(CXX) $(CFLAGS) add.o $(LIBS) -o add
