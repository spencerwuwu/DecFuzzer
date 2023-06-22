#ifndef s349r2_H
#define s349r2_H

#include "w2c2_base.h"

typedef struct s349r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s349r2Instance;

void f0(s349r2Instance*);

void f1(s349r2Instance*);

U32 f2(s349r2Instance*);

void f3(s349r2Instance*,U32);

U32 f4(s349r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s349r2Instance*,U32,U32,U32,U32,U32);

void f6(s349r2Instance*,U32);

void f7(s349r2Instance*,U32,U32,U32);

void f8(s349r2Instance*,U32,U32,U32);

void s349r2____wasm_call_ctors(s349r2Instance*i);

void s349r2____wasm_apply_data_relocs(s349r2Instance*i);

U32 s349r2_func_1(s349r2Instance*i);

void s349r2_call_cb(s349r2Instance*i,U32 l0);

void s349r2Instantiate(s349r2Instance* instance, void* resolve(const char* module, const char* name));

void s349r2FreeInstance(s349r2Instance* instance);

#endif /* s349r2_H */

