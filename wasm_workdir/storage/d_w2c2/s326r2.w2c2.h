#ifndef s326r2_H
#define s326r2_H

#include "w2c2_base.h"

typedef struct s326r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s326r2Instance;

void f0(s326r2Instance*);

void f1(s326r2Instance*);

U32 f2(s326r2Instance*);

void f3(s326r2Instance*,U32);

U32 f4(s326r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s326r2Instance*,U32,U32,U32,U32,U32);

void f6(s326r2Instance*,U32);

void f7(s326r2Instance*,U32,U32,U32);

void f8(s326r2Instance*,U32,U32,U32);

void s326r2____wasm_call_ctors(s326r2Instance*i);

void s326r2____wasm_apply_data_relocs(s326r2Instance*i);

U32 s326r2_func_1(s326r2Instance*i);

void s326r2_call_cb(s326r2Instance*i,U32 l0);

void s326r2Instantiate(s326r2Instance* instance, void* resolve(const char* module, const char* name));

void s326r2FreeInstance(s326r2Instance* instance);

#endif /* s326r2_H */

