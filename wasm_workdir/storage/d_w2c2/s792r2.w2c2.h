#ifndef s792r2_H
#define s792r2_H

#include "w2c2_base.h"

typedef struct s792r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s792r2Instance;

void f0(s792r2Instance*);

void f1(s792r2Instance*);

U32 f2(s792r2Instance*);

void f3(s792r2Instance*,U32);

U32 f4(s792r2Instance*,U32,U32,U32);

void f5(s792r2Instance*,U32,U32,U32,U32,U32);

void f6(s792r2Instance*,U32);

void f7(s792r2Instance*,U32,U32,U32);

void f8(s792r2Instance*,U32,U32,U32);

void s792r2____wasm_call_ctors(s792r2Instance*i);

void s792r2____wasm_apply_data_relocs(s792r2Instance*i);

U32 s792r2_func_1(s792r2Instance*i);

void s792r2_call_cb(s792r2Instance*i,U32 l0);

void s792r2Instantiate(s792r2Instance* instance, void* resolve(const char* module, const char* name));

void s792r2FreeInstance(s792r2Instance* instance);

#endif /* s792r2_H */

