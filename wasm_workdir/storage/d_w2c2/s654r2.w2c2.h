#ifndef s654r2_H
#define s654r2_H

#include "w2c2_base.h"

typedef struct s654r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s654r2Instance;

void f0(s654r2Instance*);

void f1(s654r2Instance*);

U32 f2(s654r2Instance*);

void f3(s654r2Instance*,U32);

U32 f4(s654r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s654r2Instance*,U32,U32,U32,U32,U32);

void f6(s654r2Instance*,U32);

void f7(s654r2Instance*,U32,U32,U32);

void f8(s654r2Instance*,U32,U32,U32);

void s654r2____wasm_call_ctors(s654r2Instance*i);

void s654r2____wasm_apply_data_relocs(s654r2Instance*i);

U32 s654r2_func_1(s654r2Instance*i);

void s654r2_call_cb(s654r2Instance*i,U32 l0);

void s654r2Instantiate(s654r2Instance* instance, void* resolve(const char* module, const char* name));

void s654r2FreeInstance(s654r2Instance* instance);

#endif /* s654r2_H */

