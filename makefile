CC = g++
ODIR = bin/obj
SDIR = src/**
INC = -I include


all: $(ODIR)

$(ODIR): $(SDIR) 
	for path in $(SDIR); do \
		echo $$(basename $$path) ; \
		# echo $$(ODIR) ; \
		$(CC) $(INC)/$$(basename $$path) -o bin/obj -c $$path/**.cpp; \
	done
