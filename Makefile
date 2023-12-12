CC=gcc
OPT=-O0
CFLAGS=-g $(OPT)
INC=-I /home/ansarimn/Downloads/testing/



SRC=src
OBJ=obj
BIN=bin/main
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

EVERY_OBJ=$(OBJ)/%.o
EVERY_SRC=$(SRC)/%.c




all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@




init: $(OBJS)

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@




clean:
	$(RM) -rf $(OBJ)/* bin/*