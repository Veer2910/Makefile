CC = gcc
TARGET = final.out

SOURCES = main.c $(wildcard project*/*.c)

build:
	$(CC) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

debug:
	$(CC) -g $(SOURCES) -o $(TARGET)