#ifndef s182r2_H
#define s182r2_H

#include "w2c2_base.h"

typedef struct s182r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s182r2Instance;

void f0(s182r2Instance*);

void f1(s182r2Instance*);

U32 f2(s182r2Instance*);

void f3(s182r2Instance*,U32);

U32 f4(s182r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s182r2Instance*,U32,U32,U32,U32,U32);

void f6(s182r2Instance*,U32);

void f7(s182r2Instance*,U32,U32,U32);

void f8(s182r2Instance*,U32,U32,U32);

void s182r2____wasm_call_ctors(s182r2Instance*i);

void s182r2____wasm_apply_data_relocs(s182r2Instance*i);

U32 s182r2_func_1(s182r2Instance*i);

void s182r2_call_cb(s182r2Instance*i,U32 l0);

void s182r2Instantiate(s182r2Instance* instance, void* resolve(const char* module, const char* name));

void s182r2FreeInstance(s182r2Instance* instance);

#endif /* s182r2_H */

