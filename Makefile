# g++ for C++
CC = g++

# Compiler flags:
#-Wall turns on most, but not all, compiler warnings
CFLAGS= -Wall

# Build target executable
TARGET = Main
CPP_FILES = *.cpp

all: $(TARGET)

$(TARGET): $(CPP_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(CPP_FILES)

clean:
	$(RM) $(TARGET)
