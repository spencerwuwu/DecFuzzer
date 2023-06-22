#ifndef s751r2_H
#define s751r2_H

#include "w2c2_base.h"

typedef struct s751r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s751r2Instance;

void f0(s751r2Instance*);

void f1(s751r2Instance*);

U32 f2(s751r2Instance*);

void f3(s751r2Instance*,U32);

U32 f4(s751r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s751r2Instance*,U32,U32,U32,U32,U32);

void f6(s751r2Instance*,U32);

void f7(s751r2Instance*,U32,U32,U32);

void f8(s751r2Instance*,U32,U32,U32);

void s751r2____wasm_call_ctors(s751r2Instance*i);

void s751r2____wasm_apply_data_relocs(s751r2Instance*i);

U32 s751r2_func_1(s751r2Instance*i);

void s751r2_call_cb(s751r2Instance*i,U32 l0);

void s751r2Instantiate(s751r2Instance* instance, void* resolve(const char* module, const char* name));

void s751r2FreeInstance(s751r2Instance* instance);

#endif /* s751r2_H */

