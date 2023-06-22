#ifndef s860r2_H
#define s860r2_H

#include "w2c2_base.h"

typedef struct s860r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s860r2Instance;

void f0(s860r2Instance*);

void f1(s860r2Instance*);

U32 f2(s860r2Instance*);

void f3(s860r2Instance*,U32);

U32 f4(s860r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s860r2Instance*,U32,U32,U32,U32,U32);

void f6(s860r2Instance*,U32);

void f7(s860r2Instance*,U32,U32,U32);

void f8(s860r2Instance*,U32,U32,U32);

void s860r2____wasm_call_ctors(s860r2Instance*i);

void s860r2____wasm_apply_data_relocs(s860r2Instance*i);

U32 s860r2_func_1(s860r2Instance*i);

void s860r2_call_cb(s860r2Instance*i,U32 l0);

void s860r2Instantiate(s860r2Instance* instance, void* resolve(const char* module, const char* name));

void s860r2FreeInstance(s860r2Instance* instance);

#endif /* s860r2_H */

