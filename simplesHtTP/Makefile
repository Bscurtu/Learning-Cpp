CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -O2 -Isrc


SRC_DIR  := src
SRCS     := $(SRC_DIR)/main.cc \
            $(SRC_DIR)/network/server_init.cc \
            $(SRC_DIR)/network/server_run.cc

OBJS     := $(SRCS:.cc=.o)
TARGET   := simplesHtTP


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^


%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@


run: all
	./$(TARGET)


clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean run