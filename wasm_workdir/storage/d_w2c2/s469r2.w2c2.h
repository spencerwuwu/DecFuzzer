#ifndef s469r2_H
#define s469r2_H

#include "w2c2_base.h"

typedef struct s469r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s469r2Instance;

void f0(s469r2Instance*);

void f1(s469r2Instance*);

U32 f2(s469r2Instance*);

void f3(s469r2Instance*,U32);

U32 f4(s469r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s469r2Instance*,U32,U32,U32,U32,U32);

void f6(s469r2Instance*,U32);

void f7(s469r2Instance*,U32,U32,U32);

void f8(s469r2Instance*,U32,U32,U32);

void s469r2____wasm_call_ctors(s469r2Instance*i);

void s469r2____wasm_apply_data_relocs(s469r2Instance*i);

U32 s469r2_func_1(s469r2Instance*i);

void s469r2_call_cb(s469r2Instance*i,U32 l0);

void s469r2Instantiate(s469r2Instance* instance, void* resolve(const char* module, const char* name));

void s469r2FreeInstance(s469r2Instance* instance);

#endif /* s469r2_H */

