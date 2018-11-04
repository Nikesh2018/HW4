# Files
EXEC := myprog2
SRC  := $(wildcard *.c) 
OBJ  := $(patsubst %.c,%.o,$(SRC))
# Options
CC := gcc
CFLAGS := -O3
# Rules
$(EXEC): myprog2.o
	$(CC) myprog2.c -o $(EXEC) 
myprog2.o: myprog2.c
# Useful phony targets
.PHONY: clobber clean neat echo
clean: neat 
	$(RM) $(OBJ)
neat:
	$(RM)*~ .*~
echo:
	@echo $(OBJ)
