#ifndef s908r2_H
#define s908r2_H

#include "w2c2_base.h"

typedef struct s908r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s908r2Instance;

void f0(s908r2Instance*);

void f1(s908r2Instance*);

U32 f2(s908r2Instance*);

void f3(s908r2Instance*,U32);

U32 f4(s908r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s908r2Instance*,U32,U32,U32,U32,U32);

void f6(s908r2Instance*,U32);

void f7(s908r2Instance*,U32,U32,U32);

void f8(s908r2Instance*,U32,U32,U32);

void s908r2____wasm_call_ctors(s908r2Instance*i);

void s908r2____wasm_apply_data_relocs(s908r2Instance*i);

U32 s908r2_func_1(s908r2Instance*i);

void s908r2_call_cb(s908r2Instance*i,U32 l0);

void s908r2Instantiate(s908r2Instance* instance, void* resolve(const char* module, const char* name));

void s908r2FreeInstance(s908r2Instance* instance);

#endif /* s908r2_H */

