# Simplex Emulator
A C++ class library that emulates a simplex computer.

## How to use
You can either download from source or use a binary from the [releases](../../releases) page.
If you're building from source, you can use `make all` to generate the binary and an example program.

To use the emulator, write a C++ script passing an array of 99 ints to the class constructor, and then call the instance's run method.
Refer to [add.cpp](add.cpp) for an example program that adds two user-generated numbers.
Make sure you include the header and link the .o to your binary.
