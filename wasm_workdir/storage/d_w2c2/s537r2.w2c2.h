#ifndef s537r2_H
#define s537r2_H

#include "w2c2_base.h"

typedef struct s537r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s537r2Instance;

void f0(s537r2Instance*);

void f1(s537r2Instance*);

U32 f2(s537r2Instance*);

void f3(s537r2Instance*,U32);

U32 f4(s537r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s537r2Instance*,U32,U32,U32,U32,U32);

void f6(s537r2Instance*,U32);

void f7(s537r2Instance*,U32,U32,U32);

void f8(s537r2Instance*,U32,U32,U32);

void s537r2____wasm_call_ctors(s537r2Instance*i);

void s537r2____wasm_apply_data_relocs(s537r2Instance*i);

U32 s537r2_func_1(s537r2Instance*i);

void s537r2_call_cb(s537r2Instance*i,U32 l0);

void s537r2Instantiate(s537r2Instance* instance, void* resolve(const char* module, const char* name));

void s537r2FreeInstance(s537r2Instance* instance);

#endif /* s537r2_H */

