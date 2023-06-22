#ifndef s339r2_H
#define s339r2_H

#include "w2c2_base.h"

typedef struct s339r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s339r2Instance;

void f0(s339r2Instance*);

void f1(s339r2Instance*);

U32 f2(s339r2Instance*);

void f3(s339r2Instance*,U32);

U32 f4(s339r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s339r2Instance*,U32,U32,U32,U32,U32);

void f6(s339r2Instance*,U32);

void f7(s339r2Instance*,U32,U32,U32);

void f8(s339r2Instance*,U32,U32,U32);

void s339r2____wasm_call_ctors(s339r2Instance*i);

void s339r2____wasm_apply_data_relocs(s339r2Instance*i);

U32 s339r2_func_1(s339r2Instance*i);

void s339r2_call_cb(s339r2Instance*i,U32 l0);

void s339r2Instantiate(s339r2Instance* instance, void* resolve(const char* module, const char* name));

void s339r2FreeInstance(s339r2Instance* instance);

#endif /* s339r2_H */

