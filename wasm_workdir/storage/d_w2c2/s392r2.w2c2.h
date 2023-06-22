#ifndef s392r2_H
#define s392r2_H

#include "w2c2_base.h"

typedef struct s392r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s392r2Instance;

void f0(s392r2Instance*);

void f1(s392r2Instance*);

U32 f2(s392r2Instance*);

void f3(s392r2Instance*,U32);

U32 f4(s392r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s392r2Instance*,U32,U32,U32,U32,U32);

void f6(s392r2Instance*,U32);

void f7(s392r2Instance*,U32,U32,U32);

void f8(s392r2Instance*,U32,U32,U32);

void s392r2____wasm_call_ctors(s392r2Instance*i);

void s392r2____wasm_apply_data_relocs(s392r2Instance*i);

U32 s392r2_func_1(s392r2Instance*i);

void s392r2_call_cb(s392r2Instance*i,U32 l0);

void s392r2Instantiate(s392r2Instance* instance, void* resolve(const char* module, const char* name));

void s392r2FreeInstance(s392r2Instance* instance);

#endif /* s392r2_H */

