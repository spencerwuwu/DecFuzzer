#ifndef s13r2_H
#define s13r2_H

#include "w2c2_base.h"

typedef struct s13r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s13r2Instance;

void f0(s13r2Instance*);

void f1(s13r2Instance*);

U32 f2(s13r2Instance*);

void f3(s13r2Instance*,U32);

U32 f4(s13r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s13r2Instance*,U32,U32,U32,U32,U32);

void f6(s13r2Instance*,U32);

void f7(s13r2Instance*,U32,U32,U32);

void f8(s13r2Instance*,U32,U32,U32);

void s13r2____wasm_call_ctors(s13r2Instance*i);

void s13r2____wasm_apply_data_relocs(s13r2Instance*i);

U32 s13r2_func_1(s13r2Instance*i);

void s13r2_call_cb(s13r2Instance*i,U32 l0);

void s13r2Instantiate(s13r2Instance* instance, void* resolve(const char* module, const char* name));

void s13r2FreeInstance(s13r2Instance* instance);

#endif /* s13r2_H */

