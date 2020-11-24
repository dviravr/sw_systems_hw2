CC=gcc
AR=ar
FLAGS= -Wall
OBJECTS_LIB=myBank.o
OBJECTS_MAIN=main.o


all: libmyBank.a run 

myBanks: libmyBank.a

	
run: $(OBJECTS_MAIN) libmyBank.a
	$(CC) $(FLAGS) -o run $(OBJECTS_MAIN) libmyBank.a


libmyBank.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyBank.a $(OBJECTS_LIB)


myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
	

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a  run

.PHONY: clean all