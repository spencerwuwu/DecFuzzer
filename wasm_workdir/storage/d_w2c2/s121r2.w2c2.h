#ifndef s121r2_H
#define s121r2_H

#include "w2c2_base.h"

typedef struct s121r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s121r2Instance;

void f0(s121r2Instance*);

void f1(s121r2Instance*);

U32 f2(s121r2Instance*);

void f3(s121r2Instance*,U32);

U32 f4(s121r2Instance*,U32,U32,U32,U32);

void f5(s121r2Instance*,U32,U32,U32,U32,U32);

void f6(s121r2Instance*,U32);

void f7(s121r2Instance*,U32,U32,U32);

void f8(s121r2Instance*,U32,U32,U32);

void s121r2____wasm_call_ctors(s121r2Instance*i);

void s121r2____wasm_apply_data_relocs(s121r2Instance*i);

U32 s121r2_func_1(s121r2Instance*i);

void s121r2_call_cb(s121r2Instance*i,U32 l0);

void s121r2Instantiate(s121r2Instance* instance, void* resolve(const char* module, const char* name));

void s121r2FreeInstance(s121r2Instance* instance);

#endif /* s121r2_H */

