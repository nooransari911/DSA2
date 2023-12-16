CC=gcc
OPT=-O0
CFLAGS=-g
INC=-I /home/ansarimn/Downloads/testing/


# Directories for src, obj, bins
SRC=src
OBJ=obj
SRCtest=testing
OBJtest=testing/obj


BIN=bin/main
BINtest=bin/test


# wildcard, patsubst for all *.o, *.c files
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))
SRCStest=$(wildcard $(SRCtest)/*.c)
OBJStest=$(patsubst $(SRCtest)/%.c, $(OBJtest)/%.o, $(SRCStest))


EVERY_OBJ=$(OBJ)/%.o
EVERY_SRC=$(SRC)/%.c





# init for all, test targets
init: $(OBJS)

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -O2 -c $< -o $@


init_test: $(OBJStest)

$(OBJtest)/%.o: $(SRCtest)/%.c
	$(CC) $(CFLAGS) -O2 -c $< -o $@




# Main targets;
# all: for DSA2;
# test: for testing purposes;
all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(OBJS) -o $@


test: $(BINtest)

$(BINtest): $(OBJtest)
	$(CC) $(CFLAGS) $(OBJStest) -o $@






# -O1, -O2 main targets;
L1: bin/L1

bin/L1: $(OBJ)
	$(CC) $(CFLAGS) -O1 $(OBJS) -o $@



L2: bin/L2

bin/L2: $(OBJ)
	$(CC) $(CFLAGS) -O2 $(OBJS) -o $@





# clean everything in obj, bin, /testing/obj;
clean:
	$(RM) -rf $(OBJ)/* bin/* $(OBJtest)/*
