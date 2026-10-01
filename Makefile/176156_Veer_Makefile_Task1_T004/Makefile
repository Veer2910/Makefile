CC = gcc

.PHONY: all mod1 mod2 mod3 run1 run2 run3 clean

all: mod1 mod2 mod3

mod1: src1.c
	$(CC) src1.c -o bin1

mod2: src2.c
	$(CC) src2.c -o bin2

mod3: src3.c
	$(CC) src3.c -o bin3

run1: mod1
	./bin1

run2: mod2
	./bin2

run3: mod3
	./bin3

clean:
	rm -f bin1 bin2 bin3