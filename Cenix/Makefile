TARGET = calculator.run
CC = gcc
CFLAGS = -Wall -pedantic -g3 -Og -Wuninitialized 
LIBS =

HEADERS=
SOURCES = calculator.c

.PHONY: default all clean

default: $(TARGET)
all: default

HEADERS = $(wildcard *.h)
SOURCES = $(wildcard *.c)
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -Wall $(LIBS) -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS)
	rm -f $(TARGET)