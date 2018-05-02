TARGET=sorting.run
CC=gcc
CFLAGS=-Wall -pedantic -g3 -Og -Wuninitialized -ansi
DFLAGS=-DDEBUG
LIBS=

HEADERS=BubbleSort.h HeapSort.h InsertionSort.h Objects.h QuickSort.h SelectionSort.h
SOURCES=sorting.c BubbleSort.c HeapSort.c InsertionSort.c Objects.c QuickSort.c SelectionSort.c

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(DFLAGS) $(SOURCES) $(LIBS) -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)