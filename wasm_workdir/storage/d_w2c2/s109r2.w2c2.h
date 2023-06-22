#ifndef s109r2_H
#define s109r2_H

#include "w2c2_base.h"

typedef struct s109r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s109r2Instance;

void f0(s109r2Instance*);

void f1(s109r2Instance*);

U32 f2(s109r2Instance*);

void f3(s109r2Instance*,U32);

U32 f4(s109r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s109r2Instance*,U32,U32,U32,U32,U32);

void f6(s109r2Instance*,U32);

void f7(s109r2Instance*,U32,U32,U32);

void f8(s109r2Instance*,U32,U32,U32);

void s109r2____wasm_call_ctors(s109r2Instance*i);

void s109r2____wasm_apply_data_relocs(s109r2Instance*i);

U32 s109r2_func_1(s109r2Instance*i);

void s109r2_call_cb(s109r2Instance*i,U32 l0);

void s109r2Instantiate(s109r2Instance* instance, void* resolve(const char* module, const char* name));

void s109r2FreeInstance(s109r2Instance* instance);

#endif /* s109r2_H */

