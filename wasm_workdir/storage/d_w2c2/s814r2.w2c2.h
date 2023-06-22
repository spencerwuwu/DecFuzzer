#ifndef s814r2_H
#define s814r2_H

#include "w2c2_base.h"

typedef struct s814r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s814r2Instance;

void f0(s814r2Instance*);

void f1(s814r2Instance*);

U32 f2(s814r2Instance*);

void f3(s814r2Instance*,U32);

U32 f4(s814r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s814r2Instance*,U32,U32,U32,U32,U32);

void f6(s814r2Instance*,U32);

void f7(s814r2Instance*,U32,U32,U32);

void f8(s814r2Instance*,U32,U32,U32);

void s814r2____wasm_call_ctors(s814r2Instance*i);

void s814r2____wasm_apply_data_relocs(s814r2Instance*i);

U32 s814r2_func_1(s814r2Instance*i);

void s814r2_call_cb(s814r2Instance*i,U32 l0);

void s814r2Instantiate(s814r2Instance* instance, void* resolve(const char* module, const char* name));

void s814r2FreeInstance(s814r2Instance* instance);

#endif /* s814r2_H */

