PROJECTS = project1 project2 project3

all:
	$(MAKE) -C project1
	$(MAKE) -C project2
	$(MAKE) -C project3

project1:
	$(MAKE) -C project1

project2:
	$(MAKE) -C project2

project3:
	$(MAKE) -C project3

run1:
	$(MAKE) -C project1 run

run2:
	$(MAKE) -C project2 run

run3:
	$(MAKE) -C project3 run

clean:
	$(MAKE) -C project1 clean
	$(MAKE) -C project2 clean
	$(MAKE) -C project3 clean

.PHONY: all project1 project2 project3 run1 run2 run3 clean