#ifndef s647r2_H
#define s647r2_H

#include "w2c2_base.h"

typedef struct s647r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s647r2Instance;

void f0(s647r2Instance*);

void f1(s647r2Instance*);

U32 f2(s647r2Instance*);

void f3(s647r2Instance*,U32);

U32 f4(s647r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s647r2Instance*,U32,U32,U32,U32,U32);

void f6(s647r2Instance*,U32);

void f7(s647r2Instance*,U32,U32,U32);

void f8(s647r2Instance*,U32,U32,U32);

void s647r2____wasm_call_ctors(s647r2Instance*i);

void s647r2____wasm_apply_data_relocs(s647r2Instance*i);

U32 s647r2_func_1(s647r2Instance*i);

void s647r2_call_cb(s647r2Instance*i,U32 l0);

void s647r2Instantiate(s647r2Instance* instance, void* resolve(const char* module, const char* name));

void s647r2FreeInstance(s647r2Instance* instance);

#endif /* s647r2_H */

