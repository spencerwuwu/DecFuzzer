#ifndef s198r2_H
#define s198r2_H

#include "w2c2_base.h"

typedef struct s198r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s198r2Instance;

void f0(s198r2Instance*);

void f1(s198r2Instance*);

U32 f2(s198r2Instance*);

void f3(s198r2Instance*,U32);

U32 f4(s198r2Instance*,U32,U32,U32,U32);

void f5(s198r2Instance*,U32,U32,U32,U32,U32);

void f6(s198r2Instance*,U32);

void f7(s198r2Instance*,U32,U32,U32);

void f8(s198r2Instance*,U32,U32,U32);

void s198r2____wasm_call_ctors(s198r2Instance*i);

void s198r2____wasm_apply_data_relocs(s198r2Instance*i);

U32 s198r2_func_1(s198r2Instance*i);

void s198r2_call_cb(s198r2Instance*i,U32 l0);

void s198r2Instantiate(s198r2Instance* instance, void* resolve(const char* module, const char* name));

void s198r2FreeInstance(s198r2Instance* instance);

#endif /* s198r2_H */

