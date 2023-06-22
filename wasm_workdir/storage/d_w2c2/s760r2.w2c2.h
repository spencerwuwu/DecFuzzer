#ifndef s760r2_H
#define s760r2_H

#include "w2c2_base.h"

typedef struct s760r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s760r2Instance;

void f0(s760r2Instance*);

void f1(s760r2Instance*);

U32 f2(s760r2Instance*);

void f3(s760r2Instance*,U32);

U32 f4(s760r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s760r2Instance*,U32,U32,U32,U32,U32);

void f6(s760r2Instance*,U32);

void f7(s760r2Instance*,U32,U32,U32);

void f8(s760r2Instance*,U32,U32,U32);

void s760r2____wasm_call_ctors(s760r2Instance*i);

void s760r2____wasm_apply_data_relocs(s760r2Instance*i);

U32 s760r2_func_1(s760r2Instance*i);

void s760r2_call_cb(s760r2Instance*i,U32 l0);

void s760r2Instantiate(s760r2Instance* instance, void* resolve(const char* module, const char* name));

void s760r2FreeInstance(s760r2Instance* instance);

#endif /* s760r2_H */

