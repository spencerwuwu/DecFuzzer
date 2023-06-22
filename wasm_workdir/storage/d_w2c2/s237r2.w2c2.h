#ifndef s237r2_H
#define s237r2_H

#include "w2c2_base.h"

typedef struct s237r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s237r2Instance;

void f0(s237r2Instance*);

void f1(s237r2Instance*);

U32 f2(s237r2Instance*);

void f3(s237r2Instance*,U32);

U32 f4(s237r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s237r2Instance*,U32,U32,U32,U32,U32);

void f6(s237r2Instance*,U32);

void f7(s237r2Instance*,U32,U32,U32);

void f8(s237r2Instance*,U32,U32,U32);

void s237r2____wasm_call_ctors(s237r2Instance*i);

void s237r2____wasm_apply_data_relocs(s237r2Instance*i);

U32 s237r2_func_1(s237r2Instance*i);

void s237r2_call_cb(s237r2Instance*i,U32 l0);

void s237r2Instantiate(s237r2Instance* instance, void* resolve(const char* module, const char* name));

void s237r2FreeInstance(s237r2Instance* instance);

#endif /* s237r2_H */

