CXX=g++
CXX_FLAGS=-Wall -g -shared
SOURCES=source
TARGETS=$(SOURCES)/engine.h $(SOURCES)/engine.cpp

engine: 
	$(CXX) $(CXX_FLAGS) -o engine.so $(TARGETS)
