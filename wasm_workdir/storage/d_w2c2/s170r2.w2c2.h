#ifndef s170r2_H
#define s170r2_H

#include "w2c2_base.h"

typedef struct s170r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s170r2Instance;

void f0(s170r2Instance*);

void f1(s170r2Instance*);

U32 f2(s170r2Instance*);

void f3(s170r2Instance*,U32);

U32 f4(s170r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s170r2Instance*,U32,U32,U32,U32,U32);

void f6(s170r2Instance*,U32);

void f7(s170r2Instance*,U32,U32,U32);

void f8(s170r2Instance*,U32,U32,U32);

void s170r2____wasm_call_ctors(s170r2Instance*i);

void s170r2____wasm_apply_data_relocs(s170r2Instance*i);

U32 s170r2_func_1(s170r2Instance*i);

void s170r2_call_cb(s170r2Instance*i,U32 l0);

void s170r2Instantiate(s170r2Instance* instance, void* resolve(const char* module, const char* name));

void s170r2FreeInstance(s170r2Instance* instance);

#endif /* s170r2_H */
