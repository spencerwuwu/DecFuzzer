#ifndef s116r2_H
#define s116r2_H

#include "w2c2_base.h"

typedef struct s116r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s116r2Instance;

void f0(s116r2Instance*);

void f1(s116r2Instance*);

U32 f2(s116r2Instance*);

void f3(s116r2Instance*,U32);

U32 f4(s116r2Instance*,U32,U32,U32,U32,U32);

void f5(s116r2Instance*,U32,U32,U32,U32,U32);

void f6(s116r2Instance*,U32);

void f7(s116r2Instance*,U32,U32,U32);

void f8(s116r2Instance*,U32,U32,U32);

void s116r2____wasm_call_ctors(s116r2Instance*i);

void s116r2____wasm_apply_data_relocs(s116r2Instance*i);

U32 s116r2_func_1(s116r2Instance*i);

void s116r2_call_cb(s116r2Instance*i,U32 l0);

void s116r2Instantiate(s116r2Instance* instance, void* resolve(const char* module, const char* name));

void s116r2FreeInstance(s116r2Instance* instance);

#endif /* s116r2_H */

