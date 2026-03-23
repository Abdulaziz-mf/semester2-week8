CC = gcc
CFLAGS = -Wall -Wextra
TARGET = student_program
OBJS = main.o student.o

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

main.o: main.c student.h structure.h
	$(CC) $(CFLAGS) -c main.c

student.o: student.c student.h structure.h
	$(CC) $(CFLAGS) -c student.c

clean:
	rm -f $(OBJS) $(TARGET)