#ifndef s312r2_H
#define s312r2_H

#include "w2c2_base.h"

typedef struct s312r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s312r2Instance;

void f0(s312r2Instance*);

void f1(s312r2Instance*);

U32 f2(s312r2Instance*);

void f3(s312r2Instance*,U32);

U32 f4(s312r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s312r2Instance*,U32,U32,U32,U32,U32);

void f6(s312r2Instance*,U32);

void f7(s312r2Instance*,U32,U32,U32);

void f8(s312r2Instance*,U32,U32,U32);

void s312r2____wasm_call_ctors(s312r2Instance*i);

void s312r2____wasm_apply_data_relocs(s312r2Instance*i);

U32 s312r2_func_1(s312r2Instance*i);

void s312r2_call_cb(s312r2Instance*i,U32 l0);

void s312r2Instantiate(s312r2Instance* instance, void* resolve(const char* module, const char* name));

void s312r2FreeInstance(s312r2Instance* instance);

#endif /* s312r2_H */

