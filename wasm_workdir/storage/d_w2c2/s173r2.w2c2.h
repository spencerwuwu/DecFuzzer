#ifndef s173r2_H
#define s173r2_H

#include "w2c2_base.h"

typedef struct s173r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s173r2Instance;

void f0(s173r2Instance*);

void f1(s173r2Instance*);

U32 f2(s173r2Instance*);

void f3(s173r2Instance*,U32);

U32 f4(s173r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s173r2Instance*,U32,U32,U32,U32,U32);

void f6(s173r2Instance*,U32);

void f7(s173r2Instance*,U32,U32,U32);

void f8(s173r2Instance*,U32,U32,U32);

void s173r2____wasm_call_ctors(s173r2Instance*i);

void s173r2____wasm_apply_data_relocs(s173r2Instance*i);

U32 s173r2_func_1(s173r2Instance*i);

void s173r2_call_cb(s173r2Instance*i,U32 l0);

void s173r2Instantiate(s173r2Instance* instance, void* resolve(const char* module, const char* name));

void s173r2FreeInstance(s173r2Instance* instance);

#endif /* s173r2_H */

