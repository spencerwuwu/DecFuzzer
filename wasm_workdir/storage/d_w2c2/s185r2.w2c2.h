#ifndef s185r2_H
#define s185r2_H

#include "w2c2_base.h"

typedef struct s185r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s185r2Instance;

void f0(s185r2Instance*);

void f1(s185r2Instance*);

U32 f2(s185r2Instance*);

void f3(s185r2Instance*,U32);

U32 f4(s185r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s185r2Instance*,U32,U32,U32,U32,U32);

void f6(s185r2Instance*,U32);

void f7(s185r2Instance*,U32,U32,U32);

void f8(s185r2Instance*,U32,U32,U32);

void s185r2____wasm_call_ctors(s185r2Instance*i);

void s185r2____wasm_apply_data_relocs(s185r2Instance*i);

U32 s185r2_func_1(s185r2Instance*i);

void s185r2_call_cb(s185r2Instance*i,U32 l0);

void s185r2Instantiate(s185r2Instance* instance, void* resolve(const char* module, const char* name));

void s185r2FreeInstance(s185r2Instance* instance);

#endif /* s185r2_H */

