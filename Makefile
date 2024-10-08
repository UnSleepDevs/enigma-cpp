CXX=g++
CXX_FLAGS=-Wall -g
CXX_DEP_FLAGS=-c
OBJ=utils.o main.o args.o engine.o
EXE=main

# Regla principal para crear el ejecutable
$(EXE): $(OBJ)
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: source/main.cpp source/libs.h source/ui/utils.h source/engine.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLGAS) $< -o $@

engine.o: source/engine.cpp source/engine.h source/libs.h
	$(CXX) $(CXX_DEPS_FLAGS) $(CXX_FLAGS) $< -o $@

utils.o: source/ui/utils.cpp source/ui/utils.h source/libs.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLAGS) $< -o $@

args.o: source/other/args.cpp source/ui/utils.h source/libs.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLAGS)  $< -o $@

clean: $(OBJ)
	rm -rf $(OBJ)
