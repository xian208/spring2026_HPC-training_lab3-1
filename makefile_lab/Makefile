# Compiler and flags
# TODO 1 
CC = ____

# TODO 2
CFLAGS = -fopenmp ____          # hint: optimization flag

# Targets
TARGET = final

# TODO 3
OBJS = ____


# Default target
$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile each source file into object file
main.o : main.c vector.h matrix.h
	$(CC) $(CFLAGS) -c main.c

vector.o : vector.c vector.h
	$(CC) $(CFLAGS) -c vector.c

# TODO 4
matrix.o : matrix.c ____ # hint: you need the header file
	$(CC) $(CFLAGS) -c ____

# TODO 5
# Install target
install : $(TARGET)
	mkdir -p ____
	cp $(TARGET) ____       # hint: where should the binary go? 

# Clean up
.PHONY : clean install
clean :
	rm -f $(TARGET) $(OBJS)
