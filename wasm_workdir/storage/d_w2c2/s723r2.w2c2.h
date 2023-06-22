#ifndef s723r2_H
#define s723r2_H

#include "w2c2_base.h"

typedef struct s723r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s723r2Instance;

void f0(s723r2Instance*);

void f1(s723r2Instance*);

U32 f2(s723r2Instance*);

void f3(s723r2Instance*,U32);

U32 f4(s723r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s723r2Instance*,U32,U32,U32,U32,U32);

void f6(s723r2Instance*,U32);

void f7(s723r2Instance*,U32,U32,U32);

void f8(s723r2Instance*,U32,U32,U32);

void s723r2____wasm_call_ctors(s723r2Instance*i);

void s723r2____wasm_apply_data_relocs(s723r2Instance*i);

U32 s723r2_func_1(s723r2Instance*i);

void s723r2_call_cb(s723r2Instance*i,U32 l0);

void s723r2Instantiate(s723r2Instance* instance, void* resolve(const char* module, const char* name));

void s723r2FreeInstance(s723r2Instance* instance);

#endif /* s723r2_H */

