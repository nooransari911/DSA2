CC=gcc
OPT=-O0
CFLAGS=-g $(OPT)
INC=-I /home/ansarimn/Downloads/testing/



SRC=src
OBJ=obj
BIN=bin/main
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))


all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

init: $(OBJ)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) -r main *.o *.dSYM