.PHONY = all clean dir

FC1 = src/main.c
FC2 = src/command.c
FC3 = src/coder.c
FO1 = build/main.o
FO2 = build/command.o
FO3 = build/coder.o
PROG = bin/coder

all: clean dir $(PROG)

dir:
	mkdir build

$(FO1): $(FC1) src/coder.h src/command.h
	gcc -Wall -Werror -o $(FO1) $(FC1)

$(FO2): $(FC2)
	gcc -Wall -Werror -o $(FO2) $(FC2)

$(FO3): $(FC3)
	gcc -Wall -Werror -o $(FO3) $(FC3)

$(PROG): $(FO1) $(FO2) $(FO3)
	gcc -Wall -Werror -o $(PROG) $(FO1) $(FO2) $(FO3)

clean:
	rm -rf bin/coder
	rm -fr build/*