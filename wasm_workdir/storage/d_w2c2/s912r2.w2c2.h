#ifndef s912r2_H
#define s912r2_H

#include "w2c2_base.h"

typedef struct s912r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s912r2Instance;

void f0(s912r2Instance*);

void f1(s912r2Instance*);

U32 f2(s912r2Instance*);

void f3(s912r2Instance*,U32);

U32 f4(s912r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s912r2Instance*,U32,U32,U32,U32,U32);

void f6(s912r2Instance*,U32);

void f7(s912r2Instance*,U32,U32,U32);

void f8(s912r2Instance*,U32,U32,U32);

void s912r2____wasm_call_ctors(s912r2Instance*i);

void s912r2____wasm_apply_data_relocs(s912r2Instance*i);

U32 s912r2_func_1(s912r2Instance*i);

void s912r2_call_cb(s912r2Instance*i,U32 l0);

void s912r2Instantiate(s912r2Instance* instance, void* resolve(const char* module, const char* name));

void s912r2FreeInstance(s912r2Instance* instance);

#endif /* s912r2_H */

