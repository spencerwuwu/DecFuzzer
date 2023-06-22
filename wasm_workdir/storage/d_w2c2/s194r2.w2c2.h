#ifndef s194r2_H
#define s194r2_H

#include "w2c2_base.h"

typedef struct s194r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s194r2Instance;

void f0(s194r2Instance*);

void f1(s194r2Instance*);

U32 f2(s194r2Instance*);

void f3(s194r2Instance*,U32);

U32 f4(s194r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s194r2Instance*,U32,U32,U32,U32,U32);

void f6(s194r2Instance*,U32);

void f7(s194r2Instance*,U32,U32,U32);

void f8(s194r2Instance*,U32,U32,U32);

void s194r2____wasm_call_ctors(s194r2Instance*i);

void s194r2____wasm_apply_data_relocs(s194r2Instance*i);

U32 s194r2_func_1(s194r2Instance*i);

void s194r2_call_cb(s194r2Instance*i,U32 l0);

void s194r2Instantiate(s194r2Instance* instance, void* resolve(const char* module, const char* name));

void s194r2FreeInstance(s194r2Instance* instance);

#endif /* s194r2_H */

