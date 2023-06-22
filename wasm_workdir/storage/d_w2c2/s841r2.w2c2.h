#ifndef s841r2_H
#define s841r2_H

#include "w2c2_base.h"

typedef struct s841r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s841r2Instance;

void f0(s841r2Instance*);

void f1(s841r2Instance*);

U32 f2(s841r2Instance*);

void f3(s841r2Instance*,U32);

U32 f4(s841r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s841r2Instance*,U32,U32,U32,U32,U32);

void f6(s841r2Instance*,U32);

void f7(s841r2Instance*,U32,U32,U32);

void f8(s841r2Instance*,U32,U32,U32);

void s841r2____wasm_call_ctors(s841r2Instance*i);

void s841r2____wasm_apply_data_relocs(s841r2Instance*i);

U32 s841r2_func_1(s841r2Instance*i);

void s841r2_call_cb(s841r2Instance*i,U32 l0);

void s841r2Instantiate(s841r2Instance* instance, void* resolve(const char* module, const char* name));

void s841r2FreeInstance(s841r2Instance* instance);

#endif /* s841r2_H */

