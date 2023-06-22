#ifndef s419r2_H
#define s419r2_H

#include "w2c2_base.h"

typedef struct s419r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s419r2Instance;

void f0(s419r2Instance*);

void f1(s419r2Instance*);

U32 f2(s419r2Instance*);

void f3(s419r2Instance*,U32);

U32 f4(s419r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s419r2Instance*,U32,U32,U32,U32,U32);

void f6(s419r2Instance*,U32);

void f7(s419r2Instance*,U32,U32,U32);

void f8(s419r2Instance*,U32,U32,U32);

void s419r2____wasm_call_ctors(s419r2Instance*i);

void s419r2____wasm_apply_data_relocs(s419r2Instance*i);

U32 s419r2_func_1(s419r2Instance*i);

void s419r2_call_cb(s419r2Instance*i,U32 l0);

void s419r2Instantiate(s419r2Instance* instance, void* resolve(const char* module, const char* name));

void s419r2FreeInstance(s419r2Instance* instance);

#endif /* s419r2_H */

