CXX ?= c++

CFLAGS = -Og -g
CPPFLAGS = $(CFLAGS)

dominoes: main.o CDominoes.o CPlayer.o CRandom.o CTable.o Domino.o
	$(CXX) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	-rm dominoes *.o
