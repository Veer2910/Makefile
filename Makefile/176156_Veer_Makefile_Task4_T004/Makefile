.PHONY: project1 project2 project3 run1 run2 run3 clean

CC = gcc

PROJECTS = project1 project2 project3

project1:
	$(CC) $(wildcard project1/*.c) -o project1/project1.out

project2:
	$(CC) $(wildcard project2/*.c) -o project2/project2.out

project3:
	$(CC) $(wildcard project3/*.c) -o project3/project3.out

run1: project1
	./project1/project1.out

run2: project2
	./project2/project2.out

run3: project3
	./project3/project3.out

clean:
	rm -f project1/project1.out
	rm -f project2/project2.out
	rm -f project3/project3.out