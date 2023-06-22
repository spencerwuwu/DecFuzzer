#ifndef s864r2_H
#define s864r2_H

#include "w2c2_base.h"

typedef struct s864r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s864r2Instance;

void f0(s864r2Instance*);

void f1(s864r2Instance*);

U32 f2(s864r2Instance*);

void f3(s864r2Instance*,U32);

U32 f4(s864r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s864r2Instance*,U32,U32,U32,U32,U32);

void f6(s864r2Instance*,U32);

void f7(s864r2Instance*,U32,U32,U32);

void f8(s864r2Instance*,U32,U32,U32);

void s864r2____wasm_call_ctors(s864r2Instance*i);

void s864r2____wasm_apply_data_relocs(s864r2Instance*i);

U32 s864r2_func_1(s864r2Instance*i);

void s864r2_call_cb(s864r2Instance*i,U32 l0);

void s864r2Instantiate(s864r2Instance* instance, void* resolve(const char* module, const char* name));

void s864r2FreeInstance(s864r2Instance* instance);

#endif /* s864r2_H */

