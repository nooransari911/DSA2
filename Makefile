CC=gcc
OPT=-O0
CFLAGS=-g -march=native -I src
INC=-I /home/ansarimn/Downloads/testing/


# Directories for src, obj, bins
SRC=src
OBJ=obj
SRCtest=testing
OBJtest=testing/obj
SHIMsrc=testing
SHIMobj=testing/obj
DBMSsrc=DBMS/src
DBMSobj=DBMS/obj

BIN=bin/main
BINtest=bin/test
SHIMbin=bin/shim
DBMSbin=bin/dbms


# wildcard, patsubst for all *.o, *.c files
SRCS=$(wildcard $(SRC)/*.c)
SRCSdbms=$(filter-out $(SRC)/test0.c, $(SRCS))
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))
OBJSdbms=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCSdbms))
SRCStest=$(wildcard $(SRCtest)/*.c)
OBJStest=$(patsubst $(SRCtest)/%.c, $(OBJtest)/%.o, $(SRCStest))
SHIMSsrc=$(wildcard $(SHIMsrc)/*.c)
SHIMSobj=$(patsubst $(SHIMsrc)/%.c, $(SHIMobj)/%.o, $(SHIMSsrc))
SHIMSHobj=$(patsubst $(SHIMsrc)/%.c, $(SHIMobj)/%.so, $(SHIMSsrc))
DBMSSsrc=$(wildcard $(DBMSsrc)/*.c)
DBMSSobj=$(patsubst $(DBMSsrc)/%.c, $(DBMSobj)/%.o, $(DBMSSsrc))


EVERY_OBJ=$(OBJ)/%.o
EVERY_SRC=$(SRC)/%.c





# init for all, test targets
init: $(OBJS)

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -O2 -c $< -o $@


init_test: $(OBJStest)

$(OBJtest)/%.o: $(SRCtest)/%.c
	$(CC) $(CFLAGS) -O2 -c $< -o $@


init_shim: $(SHIMSobj)

$(SHIMobj)/%.o: $(SHIMsrc)/%.c
	$(CC) $(CFLAGS) -O2 -c $< -o $@



init_shim_sh: $(SHIMSHobj) $(SHIMSobj)

$(SHIMobj)/%.so: $(SHIMsrc)/%.c
	$(CC) $(CFLAGS) -O2 -fPIC -shared -o $@ $^ -ldl


init_dbms: $(DBMSSobj) $(OBJSdbms)

$(DBMSobj)/%.o: $(DBMSsrc)/%.c
	$(CC) $(CFLAGS) -O2 -c $< -o $@

$(OBJdbms)/%.o: $(SRCdbms)/%.c
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


shim: $(SHIMbin)

$(SHIMbin): $(SHIMobj)
	$(CC) $(CFLAGS) $(SHIMSobj) -o $@


dbms: $(DBMSbin)

$(DBMSbin): $(DBMSobj)
	$(CC) $(CFLAGS) $(DBMSSobj) $(OBJSdbms) -o $@








# -O1, -O2 main targets;
L1: bin/L1

bin/L1: $(OBJ)
	$(CC) $(CFLAGS) -O1 $(OBJS) -o $@



L2: bin/L2

bin/L2: $(OBJ)
	$(CC) $(CFLAGS) -O2 $(OBJS) -o $@





# clean everything in obj, bin, /testing/obj;
clean:
	$(RM) -rf bin/* $(OBJ)/* $(OBJtest)/* $(DBMSobj)/*.o
