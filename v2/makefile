# Makefile

ODIR = obj
SDIR = src
SDIRS = $(shell find src -type d)
SOBJS = $(shell find src -name '*.cpp' -type f)
ODIRS = $(addprefix $(ODIR)/,$(SDIRS))
OOBJS = $(addprefix $(ODIR)/,$(patsubst %.cpp,%.o,$(SOBJS)))

CC_FLAGS = -I$(SDIR)
ifeq ($(shell uname -s),Darwin)
	CC_FLAGS += -I/usr/local/include
endif
LD = g++ -Wall
CC = g++ -Wall -std=c++11 -c

MAIN = main
all: $(MAIN)
$(MAIN): $(OOBJS)
	@$(LD) -o $@ $^
$(ODIRS):
	@mkdir -p $@
$(ODIR)/%.o : %.cpp | $(ODIRS)
	@$(CC) -o $@ $< $(CC_FLAGS)
.PHONY: clean
clean:
	@rm -r $(MAIN)
