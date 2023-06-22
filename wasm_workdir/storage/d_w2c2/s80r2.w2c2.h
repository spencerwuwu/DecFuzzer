#ifndef s80r2_H
#define s80r2_H

#include "w2c2_base.h"

typedef struct s80r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s80r2Instance;

void f0(s80r2Instance*);

void f1(s80r2Instance*);

U32 f2(s80r2Instance*);

void f3(s80r2Instance*,U32);

U32 f4(s80r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s80r2Instance*,U32,U32,U32,U32,U32);

void f6(s80r2Instance*,U32);

void f7(s80r2Instance*,U32,U32,U32);

void f8(s80r2Instance*,U32,U32,U32);

void s80r2____wasm_call_ctors(s80r2Instance*i);

void s80r2____wasm_apply_data_relocs(s80r2Instance*i);

U32 s80r2_func_1(s80r2Instance*i);

void s80r2_call_cb(s80r2Instance*i,U32 l0);

void s80r2Instantiate(s80r2Instance* instance, void* resolve(const char* module, const char* name));

void s80r2FreeInstance(s80r2Instance* instance);

#endif /* s80r2_H */

