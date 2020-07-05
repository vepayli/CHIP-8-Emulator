CXX_FLAGS += -std=c++17 -Wall -Wextra
LNK_LIBS  += -lraylib

SOURCES    = $(shell find . -name "*.cc")
OBJECTS    = $(SOURCES:%.cc=%.o)
TARGET     = build/chip8-emu

.PHONY: all
.PHONY: clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(LINK.cc) $(CXX_FLAGS) $^ $(LNK_LIBS) -o $@

clean:
	rm -f $(OBJS) $(TARGET) *~
