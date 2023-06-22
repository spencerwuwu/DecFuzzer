#ifndef s988r2_H
#define s988r2_H

#include "w2c2_base.h"

typedef struct s988r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s988r2Instance;

void f0(s988r2Instance*);

void f1(s988r2Instance*);

U32 f2(s988r2Instance*);

void f3(s988r2Instance*,U32);

U32 f4(s988r2Instance*,U32,U32,U32,U32);

void f5(s988r2Instance*,U32,U32,U32,U32,U32);

void f6(s988r2Instance*,U32);

void f7(s988r2Instance*,U32,U32,U32);

void f8(s988r2Instance*,U32,U32,U32);

void s988r2____wasm_call_ctors(s988r2Instance*i);

void s988r2____wasm_apply_data_relocs(s988r2Instance*i);

U32 s988r2_func_1(s988r2Instance*i);

void s988r2_call_cb(s988r2Instance*i,U32 l0);

void s988r2Instantiate(s988r2Instance* instance, void* resolve(const char* module, const char* name));

void s988r2FreeInstance(s988r2Instance* instance);

#endif /* s988r2_H */

