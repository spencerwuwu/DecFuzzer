#ifndef s447r2_H
#define s447r2_H

#include "w2c2_base.h"

typedef struct s447r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s447r2Instance;

void f0(s447r2Instance*);

void f1(s447r2Instance*);

U32 f2(s447r2Instance*);

void f3(s447r2Instance*,U32);

U32 f4(s447r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s447r2Instance*,U32,U32,U32,U32,U32);

void f6(s447r2Instance*,U32);

void f7(s447r2Instance*,U32,U32,U32);

void f8(s447r2Instance*,U32,U32,U32);

void s447r2____wasm_call_ctors(s447r2Instance*i);

void s447r2____wasm_apply_data_relocs(s447r2Instance*i);

U32 s447r2_func_1(s447r2Instance*i);

void s447r2_call_cb(s447r2Instance*i,U32 l0);

void s447r2Instantiate(s447r2Instance* instance, void* resolve(const char* module, const char* name));

void s447r2FreeInstance(s447r2Instance* instance);

#endif /* s447r2_H */

