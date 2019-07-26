// RUN: rm -rf %t.cache
// RUN: not %clang++ -c -o /dev/null %s -I %S/Inputs/UnusedModuleMap -fmodules -fmodules-cache-path=%t.cache -gen-reproducer
// RUN: grep "Unrelated" %t.cache/**/*.pcm

#include <MyModule/dummy.h>
