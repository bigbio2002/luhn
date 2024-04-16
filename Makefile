CXX ?= g++
CXXFLAGS ?= -O2 -g


default: luhncheck

luhncheck:
	$(CXX) $(CXXFLAGS) -o pangck main.cpp luhn.cpp

clean:
	rm -f luhncheck
