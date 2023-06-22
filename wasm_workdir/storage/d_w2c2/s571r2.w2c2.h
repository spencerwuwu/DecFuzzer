#ifndef s571r2_H
#define s571r2_H

#include "w2c2_base.h"

typedef struct s571r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s571r2Instance;

void f0(s571r2Instance*);

void f1(s571r2Instance*);

U32 f2(s571r2Instance*);

void f3(s571r2Instance*,U32);

U32 f4(s571r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s571r2Instance*,U32,U32,U32,U32,U32);

void f6(s571r2Instance*,U32);

void f7(s571r2Instance*,U32,U32,U32);

void f8(s571r2Instance*,U32,U32,U32);

void s571r2____wasm_call_ctors(s571r2Instance*i);

void s571r2____wasm_apply_data_relocs(s571r2Instance*i);

U32 s571r2_func_1(s571r2Instance*i);

void s571r2_call_cb(s571r2Instance*i,U32 l0);

void s571r2Instantiate(s571r2Instance* instance, void* resolve(const char* module, const char* name));

void s571r2FreeInstance(s571r2Instance* instance);

#endif /* s571r2_H */

