#ifndef s355r2_H
#define s355r2_H

#include "w2c2_base.h"

typedef struct s355r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s355r2Instance;

void f0(s355r2Instance*);

void f1(s355r2Instance*);

U32 f2(s355r2Instance*);

void f3(s355r2Instance*,U32);

U32 f4(s355r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s355r2Instance*,U32,U32,U32,U32,U32);

void f6(s355r2Instance*,U32);

void f7(s355r2Instance*,U32,U32,U32);

void f8(s355r2Instance*,U32,U32,U32);

void s355r2____wasm_call_ctors(s355r2Instance*i);

void s355r2____wasm_apply_data_relocs(s355r2Instance*i);

U32 s355r2_func_1(s355r2Instance*i);

void s355r2_call_cb(s355r2Instance*i,U32 l0);

void s355r2Instantiate(s355r2Instance* instance, void* resolve(const char* module, const char* name));

void s355r2FreeInstance(s355r2Instance* instance);

#endif /* s355r2_H */

