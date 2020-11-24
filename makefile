CC=gcc
AR=ar
FLAGS= -Wall
OBJECTS_LIB=myBank.o
OBJECTS_MAIN=main.o


all: libmyBank.a mains 

myBanks: libmyBank.a

	
mains: $(OBJECTS_MAIN) libmyBank.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyBank.a


libmyBank.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyBank.a $(OBJECTS_LIB)


myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
	

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a  mains

.PHONY: clean all