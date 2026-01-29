CXX ?= g++
CXXFLAGS ?= -O1 -g -Wall -Wextra


default: luhncheck

luhncheck: main.o luhn.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f luhncheck *.o

.PHONY: default clean
