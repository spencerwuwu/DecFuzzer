#ifndef s20r2_H
#define s20r2_H

#include "w2c2_base.h"

typedef struct s20r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s20r2Instance;

void f0(s20r2Instance*);

void f1(s20r2Instance*);

U32 f2(s20r2Instance*);

void f3(s20r2Instance*,U32);

U32 f4(s20r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s20r2Instance*,U32,U32,U32,U32,U32);

void f6(s20r2Instance*,U32);

void f7(s20r2Instance*,U32,U32,U32);

void f8(s20r2Instance*,U32,U32,U32);

void s20r2____wasm_call_ctors(s20r2Instance*i);

void s20r2____wasm_apply_data_relocs(s20r2Instance*i);

U32 s20r2_func_1(s20r2Instance*i);

void s20r2_call_cb(s20r2Instance*i,U32 l0);

void s20r2Instantiate(s20r2Instance* instance, void* resolve(const char* module, const char* name));

void s20r2FreeInstance(s20r2Instance* instance);

#endif /* s20r2_H */

