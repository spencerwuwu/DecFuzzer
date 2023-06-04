// ANCHOR: imports
// We're going to use RLBox in a single-threaded environment.
#define RLBOX_SINGLE_THREADED_INVOCATIONS

// All calls into the sandbox are resolved statically.
#define RLBOX_USE_STATIC_CALLS() rlbox_wasm2c_sandbox_lookup_symbol
#define RLBOX_WASM2C_MODULE_NAME mylib

#include <stdio.h>
#include <cassert>
#include "mylib.h"
#include "mylib.wasm.h"
#include "rlbox.hpp"
#include "rlbox_wasm2c_sandbox.hpp"


using namespace std;
using namespace rlbox;

// Define base type for mylib using the noop sandbox
RLBOX_DEFINE_BASE_TYPES_FOR(mylib, wasm2c);


int main(int argc, char const *argv[]) {
// ANCHOR_END: imports
// ANCHOR: hello
  // Declare and create a new sandbox
  rlbox_sandbox_mylib sandbox;
  sandbox.create_sandbox();

  // Call the library hello function:
  //sandbox.invoke_sandbox_function(hello);
// ANCHOR_END: hello

// ANCHOR: add
  // call the add function and check the result:
  auto ok = sandbox.invoke_sandbox_function(add, 3, 4)
                   .copy_and_verify([](unsigned ret){
    printf("Adding... 3+4 = %d\n", ret);
    return ret == 7;
  });
  printf("OK? = %d\n", ok);
// ANCHOR_END: add

  sandbox.destroy_sandbox();

  return 0;
}
// ANCHOR_END: main-end

