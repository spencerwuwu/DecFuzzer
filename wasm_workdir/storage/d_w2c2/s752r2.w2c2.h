#ifndef s752r2_H
#define s752r2_H

#include "w2c2_base.h"

typedef struct s752r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s752r2Instance;

void f0(s752r2Instance*);

void f1(s752r2Instance*);

U32 f2(s752r2Instance*);

void f3(s752r2Instance*,U32);

U32 f4(s752r2Instance*,U32,U32,U32);

void f5(s752r2Instance*,U32,U32,U32,U32,U32);

void f6(s752r2Instance*,U32);

void f7(s752r2Instance*,U32,U32,U32);

void f8(s752r2Instance*,U32,U32,U32);

void s752r2____wasm_call_ctors(s752r2Instance*i);

void s752r2____wasm_apply_data_relocs(s752r2Instance*i);

U32 s752r2_func_1(s752r2Instance*i);

void s752r2_call_cb(s752r2Instance*i,U32 l0);

void s752r2Instantiate(s752r2Instance* instance, void* resolve(const char* module, const char* name));

void s752r2FreeInstance(s752r2Instance* instance);

#endif /* s752r2_H */

