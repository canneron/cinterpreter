#ifndef clox_compiler_h
#define clox_compiler_h

#include "compiler.h"
#include "vm.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif