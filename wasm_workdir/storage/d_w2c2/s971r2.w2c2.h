#ifndef s971r2_H
#define s971r2_H

#include "w2c2_base.h"

typedef struct s971r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s971r2Instance;

void f0(s971r2Instance*);

void f1(s971r2Instance*);

U32 f2(s971r2Instance*);

void f3(s971r2Instance*,U32);

U32 f4(s971r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s971r2Instance*,U32,U32,U32,U32,U32);

void f6(s971r2Instance*,U32);

void f7(s971r2Instance*,U32,U32,U32);

void f8(s971r2Instance*,U32,U32,U32);

void s971r2____wasm_call_ctors(s971r2Instance*i);

void s971r2____wasm_apply_data_relocs(s971r2Instance*i);

U32 s971r2_func_1(s971r2Instance*i);

void s971r2_call_cb(s971r2Instance*i,U32 l0);

void s971r2Instantiate(s971r2Instance* instance, void* resolve(const char* module, const char* name));

void s971r2FreeInstance(s971r2Instance* instance);

#endif /* s971r2_H */

