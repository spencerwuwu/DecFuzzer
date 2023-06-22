#ifndef s440r2_H
#define s440r2_H

#include "w2c2_base.h"

typedef struct s440r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s440r2Instance;

void f0(s440r2Instance*);

void f1(s440r2Instance*);

U32 f2(s440r2Instance*);

void f3(s440r2Instance*,U32);

U32 f4(s440r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s440r2Instance*,U32,U32,U32,U32,U32);

void f6(s440r2Instance*,U32);

void f7(s440r2Instance*,U32,U32,U32);

void f8(s440r2Instance*,U32,U32,U32);

void s440r2____wasm_call_ctors(s440r2Instance*i);

void s440r2____wasm_apply_data_relocs(s440r2Instance*i);

U32 s440r2_func_1(s440r2Instance*i);

void s440r2_call_cb(s440r2Instance*i,U32 l0);

void s440r2Instantiate(s440r2Instance* instance, void* resolve(const char* module, const char* name));

void s440r2FreeInstance(s440r2Instance* instance);

#endif /* s440r2_H */

