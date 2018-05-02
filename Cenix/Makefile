TARGET = calculator.run
CC = gcc
CFLAGS = -Wall -pedantic -g3 -Og -Wuninitialized -ansi
LIBS =

.PHONY: default all clean

all: default
default: $(TARGET)

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