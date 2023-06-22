#ifndef s187r2_H
#define s187r2_H

#include "w2c2_base.h"

typedef struct s187r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s187r2Instance;

void f0(s187r2Instance*);

void f1(s187r2Instance*);

U32 f2(s187r2Instance*);

void f3(s187r2Instance*,U32);

U32 f4(s187r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s187r2Instance*,U32,U32,U32,U32,U32);

void f6(s187r2Instance*,U32);

void f7(s187r2Instance*,U32,U32,U32);

void f8(s187r2Instance*,U32,U32,U32);

void s187r2____wasm_call_ctors(s187r2Instance*i);

void s187r2____wasm_apply_data_relocs(s187r2Instance*i);

U32 s187r2_func_1(s187r2Instance*i);

void s187r2_call_cb(s187r2Instance*i,U32 l0);

void s187r2Instantiate(s187r2Instance* instance, void* resolve(const char* module, const char* name));

void s187r2FreeInstance(s187r2Instance* instance);

#endif /* s187r2_H */

