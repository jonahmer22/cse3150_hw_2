all:
	c++ -Wall -Wextra -I ./include/ ./src/* -o greeter

clean:
	rm ./greeter
