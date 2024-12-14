SRC=main.cpp Pampers.cpp
#SRC=$(wildcard *.cpp)
EXE=nom_executable

CXXFLAGS+=-Wall -Wextra -MMD -g -O2 -fdiagnostics-color=auto
LDFLAGS= #-lSDL

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

$(EXE): $(OBJ)
  $(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
  @mkdir -p build
  $(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
  rm -rf build core *.gch $(EXE)

-include $(DEP)