TARGET=calculator.run
CC=gcc
CFLAGS=-Wall -pedantic -g3 -Og -Wuninitialized 
LIBS=

HEADERS=
SOURCES=calculator.c

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) $(LIBS) -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)