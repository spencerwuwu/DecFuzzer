#ifndef s684r2_H
#define s684r2_H

#include "w2c2_base.h"

typedef struct s684r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s684r2Instance;

void f0(s684r2Instance*);

void f1(s684r2Instance*);

U32 f2(s684r2Instance*);

void f3(s684r2Instance*,U32);

U32 f4(s684r2Instance*,U32,U32,U32);

void f5(s684r2Instance*,U32,U32,U32,U32,U32);

void f6(s684r2Instance*,U32);

void f7(s684r2Instance*,U32,U32,U32);

void f8(s684r2Instance*,U32,U32,U32);

void s684r2____wasm_call_ctors(s684r2Instance*i);

void s684r2____wasm_apply_data_relocs(s684r2Instance*i);

U32 s684r2_func_1(s684r2Instance*i);

void s684r2_call_cb(s684r2Instance*i,U32 l0);

void s684r2Instantiate(s684r2Instance* instance, void* resolve(const char* module, const char* name));

void s684r2FreeInstance(s684r2Instance* instance);

#endif /* s684r2_H */

