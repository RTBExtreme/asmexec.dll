# Define variables for the tools
WINDRES = windres.exe
GCC = gcc.exe

# Define the source files
RC_FILE = resource.rc
C_FILE = main.c
OBJECT_FILE = resource.o
DLL_OUTPUT = asmexec.dll

# Compiler flags
CFLAGS = -m32
LDFLAGS = -shared

# Default target
all: $(DLL_OUTPUT)

# Rule to generate the object file from the resource file
$(OBJECT_FILE): $(RC_FILE)
	$(WINDRES) $(RC_FILE) -o $(OBJECT_FILE)

# Rule to compile the main C file and link everything into a DLL
$(DLL_OUTPUT): $(C_FILE) $(OBJECT_FILE)
	$(GCC) $(C_FILE) $(OBJECT_FILE) -o $(DLL_OUTPUT) $(LDFLAGS) $(CFLAGS)

# Clean up generated files
clean:
	rm -f $(OBJECT_FILE) $(DLL_OUTPUT)
