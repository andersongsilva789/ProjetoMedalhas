
CC = gcc
CFLAGS = -Wall -Wextra -g
OBJ = main.o interface.o medalha.o
EXEC = programa

all: $(EXEC)

$(EXEC): $(OBJ)
    $(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

main.o: main.c interface.h medalha.h
    $(CC) $(CFLAGS) -c main.c

interface.o: interface.c interface.h
    $(CC) $(CFLAGS) -c interface.c

medalha.o: medalha.c medalha.h
    $(CC) $(CFLAGS) -c medalha.c

clean:
    rm -f *.o $(EXEC)
