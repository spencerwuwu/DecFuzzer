#ifndef s5r2_H
#define s5r2_H

#include "w2c2_base.h"

typedef struct s5r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s5r2Instance;

void f0(s5r2Instance*);

void f1(s5r2Instance*);

U32 f2(s5r2Instance*);

void f3(s5r2Instance*,U32);

U32 f4(s5r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s5r2Instance*,U32,U32,U32,U32,U32);

void f6(s5r2Instance*,U32);

void f7(s5r2Instance*,U32,U32,U32);

void f8(s5r2Instance*,U32,U32,U32);

void s5r2____wasm_call_ctors(s5r2Instance*i);

void s5r2____wasm_apply_data_relocs(s5r2Instance*i);

U32 s5r2_func_1(s5r2Instance*i);

void s5r2_call_cb(s5r2Instance*i,U32 l0);

void s5r2Instantiate(s5r2Instance* instance, void* resolve(const char* module, const char* name));

void s5r2FreeInstance(s5r2Instance* instance);

#endif /* s5r2_H */

