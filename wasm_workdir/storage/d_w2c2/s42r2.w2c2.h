#ifndef s42r2_H
#define s42r2_H

#include "w2c2_base.h"

typedef struct s42r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s42r2Instance;

void f0(s42r2Instance*);

void f1(s42r2Instance*);

U32 f2(s42r2Instance*);

void f3(s42r2Instance*,U32);

U32 f4(s42r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s42r2Instance*,U32,U32,U32,U32,U32);

void f6(s42r2Instance*,U32);

void f7(s42r2Instance*,U32,U32,U32);

void f8(s42r2Instance*,U32,U32,U32);

void s42r2____wasm_call_ctors(s42r2Instance*i);

void s42r2____wasm_apply_data_relocs(s42r2Instance*i);

U32 s42r2_func_1(s42r2Instance*i);

void s42r2_call_cb(s42r2Instance*i,U32 l0);

void s42r2Instantiate(s42r2Instance* instance, void* resolve(const char* module, const char* name));

void s42r2FreeInstance(s42r2Instance* instance);

#endif /* s42r2_H */

