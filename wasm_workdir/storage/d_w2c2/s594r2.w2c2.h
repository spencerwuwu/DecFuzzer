#ifndef s594r2_H
#define s594r2_H

#include "w2c2_base.h"

typedef struct s594r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s594r2Instance;

void f0(s594r2Instance*);

void f1(s594r2Instance*);

U32 f2(s594r2Instance*);

void f3(s594r2Instance*,U32);

U32 f4(s594r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s594r2Instance*,U32,U32,U32,U32,U32);

void f6(s594r2Instance*,U32);

void f7(s594r2Instance*,U32,U32,U32);

void f8(s594r2Instance*,U32,U32,U32);

void s594r2____wasm_call_ctors(s594r2Instance*i);

void s594r2____wasm_apply_data_relocs(s594r2Instance*i);

U32 s594r2_func_1(s594r2Instance*i);

void s594r2_call_cb(s594r2Instance*i,U32 l0);

void s594r2Instantiate(s594r2Instance* instance, void* resolve(const char* module, const char* name));

void s594r2FreeInstance(s594r2Instance* instance);

#endif /* s594r2_H */

