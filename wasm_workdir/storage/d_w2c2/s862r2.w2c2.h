#ifndef s862r2_H
#define s862r2_H

#include "w2c2_base.h"

typedef struct s862r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s862r2Instance;

void f0(s862r2Instance*);

void f1(s862r2Instance*);

U32 f2(s862r2Instance*);

void f3(s862r2Instance*,U32);

U32 f4(s862r2Instance*,U32,U32,U32,U32,U32);

void f5(s862r2Instance*,U32,U32,U32,U32,U32);

void f6(s862r2Instance*,U32);

void f7(s862r2Instance*,U32,U32,U32);

void f8(s862r2Instance*,U32,U32,U32);

void s862r2____wasm_call_ctors(s862r2Instance*i);

void s862r2____wasm_apply_data_relocs(s862r2Instance*i);

U32 s862r2_func_1(s862r2Instance*i);

void s862r2_call_cb(s862r2Instance*i,U32 l0);

void s862r2Instantiate(s862r2Instance* instance, void* resolve(const char* module, const char* name));

void s862r2FreeInstance(s862r2Instance* instance);

#endif /* s862r2_H */

