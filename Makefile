CXX=g++
CXX_FLAGS=-Wall -g
CXX_DEP_FLAGS=-c
OBJ=utils.o engine.o fs.o args.o colors.o help.o encode.o main.o
EXE=main

clean:
	rm -rf $(OBJ) $(EXE)

# Regla principal para crear el ejecutable
$(EXE): $(OBJ)
	$(CXX) $(CXX_FLAGS) -o $@ $^

main.o: source/main.cpp source/fs/fs.h source/workers/encode.h source/libs.h source/utils/utils.h source/EnigmaCore/engine.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLGAS) $< -o $@

encode.o: source/workers/encode.cpp source/workers/encode.h source/fs/fs.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLAGS)  $< -o $@

engine.o: source/EnigmaCore/engine.cpp source/EnigmaCore/engine.h source/libs.h
	$(CXX) -c  $(CXX_FLAGS) $< -o $@

utils.o: source/utils/utils.cpp source/utils/utils.h source/libs.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLAGS) $< -o $@

args.o: source/other/args.cpp source/utils/utils.h source/libs.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLAGS)  $< -o $@

fs.o: source/fs/fs.cpp source/fs/fs.h source/fs/libs.h source/libs.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLAGS)  $< -o $@

colors.o: source/ui/colors_unix.cpp source/ui/colors.h source/ui/colors_unix.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLAGS)  $< -o $@

help.o: source/workers/help.cpp source/workers/help.h source/ui/colors.h
	$(CXX) $(CXX_DEP_FLAGS) $(CXX_FLAGS)  $< -o $@
