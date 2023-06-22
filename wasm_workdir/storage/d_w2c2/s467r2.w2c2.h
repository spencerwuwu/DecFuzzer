#ifndef s467r2_H
#define s467r2_H

#include "w2c2_base.h"

typedef struct s467r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s467r2Instance;

void f0(s467r2Instance*);

void f1(s467r2Instance*);

U32 f2(s467r2Instance*);

void f3(s467r2Instance*,U32);

U32 f4(s467r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s467r2Instance*,U32,U32,U32,U32,U32);

void f6(s467r2Instance*,U32);

void f7(s467r2Instance*,U32,U32,U32);

void f8(s467r2Instance*,U32,U32,U32);

void s467r2____wasm_call_ctors(s467r2Instance*i);

void s467r2____wasm_apply_data_relocs(s467r2Instance*i);

U32 s467r2_func_1(s467r2Instance*i);

void s467r2_call_cb(s467r2Instance*i,U32 l0);

void s467r2Instantiate(s467r2Instance* instance, void* resolve(const char* module, const char* name));

void s467r2FreeInstance(s467r2Instance* instance);

#endif /* s467r2_H */

