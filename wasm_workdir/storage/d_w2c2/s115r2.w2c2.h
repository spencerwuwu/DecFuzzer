#ifndef s115r2_H
#define s115r2_H

#include "w2c2_base.h"

typedef struct s115r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s115r2Instance;

void f0(s115r2Instance*);

void f1(s115r2Instance*);

U32 f2(s115r2Instance*);

void f3(s115r2Instance*,U32);

U32 f4(s115r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s115r2Instance*,U32,U32,U32,U32,U32);

void f6(s115r2Instance*,U32);

void f7(s115r2Instance*,U32,U32,U32);

void f8(s115r2Instance*,U32,U32,U32);

void s115r2____wasm_call_ctors(s115r2Instance*i);

void s115r2____wasm_apply_data_relocs(s115r2Instance*i);

U32 s115r2_func_1(s115r2Instance*i);

void s115r2_call_cb(s115r2Instance*i,U32 l0);

void s115r2Instantiate(s115r2Instance* instance, void* resolve(const char* module, const char* name));

void s115r2FreeInstance(s115r2Instance* instance);

#endif /* s115r2_H */

