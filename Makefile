CXX ?= g++
CXXFLAGS ?= -O2 -g


default: luhncheck

luhncheck:
	$(CXX) $(CXXFLAGS) -o luhncheck main.cpp luhn.cpp

clean:
	rm -f luhncheck
